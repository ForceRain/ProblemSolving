#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class Student
{
    private :
    char *name;
	char *pattern;
    int point;
    public :
	Student(char *in_pat,char *in_name)
    {
        name=new char[strlen(in_name)+1];
        strcpy(name,in_name);
        pattern=new char[101];
        int check=strlen(in_pat);

        for (int i=0;i<100;i++)
        {
            pattern[i]=in_pat[i%check];
        }
        pattern[100]='\0';
    }
    void checkout(char *q)
    {
        int cnt=0;
        int length=strlen(q);
        
        for (int i=0;i<length;i++)
        {
            if (pattern[i]==q[i])
                cnt++;
        }
        point=cnt;
    }
    int get_pt()
    {
        return point;
    }
    void show_name()
    {
        cout<<name<<endl;
    }
};

class Teacher
{
    private :
    vector<Student> data;
    int max;
    
    public :
	Teacher()
    {
        int max=0;
    }
    
    void input(Student stu)
    {
        if (max<stu.get_pt())
            max=stu.get_pt();
        data.push_back(stu);
    }
    
    void find_max()
    {
		cout<<max<<endl;

        for (int i=0;i<data.size();i++)
        {
            if (max==data[i].get_pt())
                data[i].show_name();
        }
    }
};

int main(void)
{
    int N;
    char input[102]={'\0'};
    Student ob1("ABC","Adrian");
    Student ob2("BABC","Bruno");
    Student ob3("CCAABB","Goran");
    
    cin>>N;
    cin>>input;
	
    ob1.checkout(input);
    ob2.checkout(input);
    ob3.checkout(input);
    
    Teacher tet;
    tet.input(ob1);
    tet.input(ob2);
    tet.input(ob3);
    
    tet.find_max();
    
    return 0;
}
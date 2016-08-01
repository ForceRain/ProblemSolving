#include <iostream>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

char buff[1001];
vector <string> container;

bool my_compare(string a,string b)
{
	if (a.length()<b.length())
		return true;
	else if (a.length()>b.length())
		return false;
	else
		return a<b;
}

int main(void)
{
	int N;
	string input="";
	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>buff;
		int len=strlen(buff);
		for (int j=0;j<len;j++)
		{
			if (('0'<=buff[j]) && (buff[j]<='9'))
				input+=buff[j];
			else
			{
				if (input.length()!=0)
				{
					int pos=input.find_first_not_of('0');
					if (pos==-1)
						container.push_back("0");
					else
						container.push_back(input.c_str()+pos);
					input="";
				}
			}
		}
		if (input.length()!=0)
		{
			int pos=input.find_first_not_of('0');
		//	cout<<"p : "<<pos<<endl;
			if (pos==-1)
				container.push_back("0");
			else
				container.push_back(input.c_str()+pos);
			input="";
		}
	}
	sort(container.begin(),container.end(),my_compare);
	int siz=container.size();
	for (int i=0;i<siz;i++)
		cout<<container[i]<<endl;

	return 0;
}
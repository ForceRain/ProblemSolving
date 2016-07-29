#include <iostream>

using namespace std;

int main(void)
{
	int test_case;
	cin>>test_case;

	for (int i=0;i<test_case;i++)
	{
		int student_num;
		unsigned long long tmp;
		cin>>student_num;

		unsigned long long candy=0;
		for (int i=0;i<student_num;i++)
		{
			cin>>tmp;
			candy+=tmp%student_num;
		}

		if (candy%student_num==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}
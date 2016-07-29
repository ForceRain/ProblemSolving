#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	char op1[20]={'\0'};
	char op2[20]={'\0'};

	cin>>op1>>op2;

	int total_carry=0;
	while ((strcmp(op1,"0")!=0) || (strcmp(op2,"0")!=0))
	{
		total_carry=0;

		int l1=strlen(op1);
		int l2=strlen(op2);

		int carry=0;
		while (l1>0 && l2>0)
		{
			if (op1[--l1]+op2[--l2]-2*'0'+carry>9)
			{
				total_carry++;
				carry=1;
			}
			else
				carry=0;
		}

		while (l1>0)
		{
			if (op1[--l1]-'0'+carry>9)
			{
				total_carry++;
				carry=1;
			}
			else
				carry=0;
		}

		while (l2>0)
		{
			if (op2[--l2]-'0'+carry>9)
			{
				total_carry++;
				carry=1;
			}
			else
				carry=0;
		}

		cout<<total_carry<<endl;

		cin>>op1>>op2;
	}

	return 0;
}
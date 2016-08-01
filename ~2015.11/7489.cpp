#include <iostream>

using namespace std;

int main(void)
{
	int testcase,num,ptr=0;
	int number=1;
	cin>>testcase;

	for (int i=0;i<testcase;i++)
	{
		number=1;
		ptr=0;
		cin>>num;
		do
		{
			ptr++;
			number*=ptr;
			if (number%10==0)
				number/=10;
		}
		while (ptr!=num);
		cout<<number%10<<endl;
	}

	return 0;
}
#include <iostream>

using namespace std;

int main(void)
{
	int testcase;
	cin>>testcase;

	int a,b;
	for (int i=0;i<testcase;i++)
	{
		cin>>a>>b;
		cout<<"Data Set "<<i+1<<":"<<endl;

		if (a<=b)
			cout<<"no drought"<<endl<<endl;
		else
		{
			int factor=a/b;
			int counter=0;
			int ruler=5;
			while (ruler<factor)
			{
				counter++;
				ruler*=5;
			}
			for (int j=0;j<counter;j++)
				cout<<"mega ";
			cout<<"drought"<<endl<<endl;
		}
	}

	return 0;
}
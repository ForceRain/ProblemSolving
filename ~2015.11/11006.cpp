#include <iostream>

using namespace std;

int main(void)
{
	int test;
	cin>>test;

	int a,b;
	for (int i=0;i<test;i++)
	{
		cin>>a>>b;
		cout<<2*b-a<<" "<<a-b<<endl;
	}

	return 0;
}
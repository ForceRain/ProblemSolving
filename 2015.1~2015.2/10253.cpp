#include <iostream>

using namespace std;

unsigned int henry(unsigned int a,unsigned int b)
{
	unsigned int tmp_b=0;
	while (true)
	{
		if (b%a==0)
			break;

		tmp_b=(b/a)+1;

		a=a*tmp_b-b;
		b=b*tmp_b;
	}
	return b;
}

int main(void)
{
	unsigned int N,a,b;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>a>>b;
		cout<<henry(a,b)<<endl;
	}

	return 0;
}
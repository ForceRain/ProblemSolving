#include <iostream>

using namespace std;

int main(void)
{
	int test,tmp;
	int sum=0;
	cin>>test;

	int N,K;
	for (int i=0;i<test;i++)
	{
		sum=0;
		cin>>N>>K;
		for (int j=0;j<N;j++)
		{
			cin>>tmp;
			sum+=tmp/K;
		}
		cout<<sum<<endl;
	}

	return 0;
}
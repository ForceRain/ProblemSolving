#include <iostream>
#include <cstring>

using namespace std;

int space[1001];

int main(void)
{
	int test,N,num;
	int max=-1;
	cin>>test;

	for (int i=0;i<test;i++)
	{
		cin>>N;
		max=-1;
		for (int j=0;j<N;j++)
		{
			cin>>num;
			space[num]++;
			if (space[num]>max)
				max=space[num];
		}
		for (int j=0;j<1001;j++)
		{
			if (space[j]==max)
			{
				cout<<j<<endl;
				break;
			}
		}
		memset(space,0,sizeof(space));
	}

	return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

int coins[101];
int space[20001];

int main(void)
{
	int N,K;
	scanf("%d%d",&N,&K);

	for (int i=0;i<N;i++)
		scanf("%d",&coins[i]);

	space[0]=1;
	for (int i=1;i<=K;i++)
	{
		int sum=0;
		for (int j=0;j<N;j++)
		{
			if ( (i-coins[j]) >= 0 )
			{
				if (space[i-coins[j]]>0)
					// sum+=space[i-coins[j]];
					space[i]++;
			}
		}
		//space[i]=sum;
	}

	for (int i=0;i<=K;i++)
		cout<<space[i]<<" ";
	cout<<endl;
	printf("%d\n",space[K]);

	return 0;
}
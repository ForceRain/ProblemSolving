#include <iostream>
#include <cstdio>

using namespace std;

int coins[101];
int space[10001];

int main(void)
{
	int N,K;
	for (int i=0;i<10001;i++)	space[i]=0x20000000;
	scanf("%d%d",&N,&K);

	for (int i=0;i<N;i++)
		scanf("%d",&coins[i]);

	space[0]=0;
	for (int i=0;i<=K;i++)
	{
		for (int j=0;j<N;j++)
		{
			if ( i-coins[j] >= 0 )
				space[i] = ( space[i] >( space[i-coins[j]] +1 )) ? space[i-coins[j]]+1 : space[i];
		}
	}
	printf("%d\n",space[K]);

	return 0;
}
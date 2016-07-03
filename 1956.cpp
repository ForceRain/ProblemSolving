#include <stdio.h>

#define INIT_VAL 0x10000000

int dp[500][500];

#include <iostream>
using namespace std;

int main(void)
{
	int N,M;
	for ( int i=0;i<500;i++ )	for ( int j=0;j<500;j++ )	dp[i][j] = INIT_VAL;
	scanf("%d%d",&N,&M);
	int a,b,c;
	for ( int i=0;i<M;i++ )
	{
		scanf("%d%d%d",&a,&b,&c);
		dp[a][b] = c;
	}

	for ( int k=1;k<=N;k++ )
	{
		for ( int i=1;i<=N;i++ )
		{
			for ( int j=1;j<=N;j++ )
				if ( dp[i][j] > dp[i][k] + dp[k][j] )
					dp[i][j] = dp[i][k] + dp[k][j];
		}
	}

	int min = INIT_VAL;
	for ( int i=1;i<=N;i++ )
	{
		if ( min > dp[i][i] )
			min = dp[i][i];
	}

	if ( min == INIT_VAL )
		printf("-1\n");
	else
		printf("%d\n",min);

	return 0;
}
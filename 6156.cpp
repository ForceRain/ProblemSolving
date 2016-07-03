#include <iostream>
#include <cstdio>

#define INIT_VAL 0x10000000

using namespace std;

int dp[501][501];

int main(void)
{
	int N,M;
	for ( int i=0;i<501;i++ )	for ( int j=0;j<501;j++ )	dp[i][j] = INIT_VAL;
	scanf("%d%d",&N,&M);

	for ( int i=0;i<M;i++ )
	{
		int a,b;
		scanf("%d%d",&a,&b);
		dp[a][b] = 1;
	}

	for ( int k=1;k<=N;k++ )
	{
		for ( int i=1;i<=N;i++ )
		{
			for ( int j=1;j<=N;j++ )
			{
				if ( i!=j && dp[i][j] > dp[i][k] + dp[k][j] )
					dp[i][j] = dp[i][k] + dp[k][j];
			}
		}
	}

	int cowCnt = 0;
	for ( int i=1;i<=N;i++ )
	{
		int cowRank = 0;
		for ( int j=1;j<=N;j++ )
		{
			if ( i!=j && dp[i][j] != INIT_VAL )
				cowRank++;
		}
		for ( int j=1;j<=N;j++ )
		{
			if ( i!=j && dp[j][i] != INIT_VAL )
				cowRank++;
		}
		if ( cowRank == (N-1) )
			cowCnt++;
	}
	printf("%d\n",cowCnt);

	return 0;
}
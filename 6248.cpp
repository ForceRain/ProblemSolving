#include <iostream>
#include <cstdio>

using namespace std;

#define INIT_VAL 0x10000000;

int dp[1001][1001];

int main(void)
{
	int N,M,K;
	for ( int i=0;i<1001;i++ )	for ( int j=0;j<1001;j++ )	dp[i][j] = INIT_VAL;
	freopen("test.txt","r",stdin);

	scanf("%d%d%d",&N,&M,&K);

	for ( int i=0;i<M;i++ )
	{
		int a,b,val;
		scanf("%d%d%d",&a,&b,&val);
		if ( dp[a][b] > val )
		{
			dp[a][b] = val;
			dp[b][a] = val;
		}
	}

	for ( int k=1;k<=N;k++ )
	{
		for ( int i=1;i<=N;i++ )
		{
			for ( int j=1;j<=N;j++ )
			{
				if ( ( i!=j ) && ( dp[i][j] > dp[i][j] + dp[k][j] ) )
					dp[i][j] = dp[i][k] + dp[k][j];
			}
		}
	}

	int max = -1;

	for ( int j=1;j<=N;j++ )
	{
		if ( j != K )
		{
			if ( max < dp[K][j] )
				max = dp[K][j];
		}
	}


	printf("%d\n",max*2);

	return 0;
}
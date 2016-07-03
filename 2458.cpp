#include <iostream>
#include <cstdio>

using namespace std;

#define INIT_VAL 0x10000000

int dp[501][501];

int main(void)
{
	int N,M;
	int p_cnt = 0;
	freopen("test.txt","r",stdin);

	scanf("%d%d",&N,&M);
	for ( int i=0;i<501;i++ )	for ( int j=0;j<501;j++ )	dp[i][j] = INIT_VAL;

	for ( int i=0;i<M;i++ )
	{
		int a,b;
		scanf("%d%d",&a,&b);
		dp[a][b] = 1;
	}

	for ( int k = 1 ; k <= N ; k++ )
	{
		for ( int i = 1; i <= N ; i++ )
		{
			for ( int j = 1; j <= N ; j++ )
			{
				if ( dp[i][j] > dp[i][k] + dp[k][j] )
					dp[i][j] = dp[i][k] + dp[k][j];
			}
		}
	}
	/*
	for ( int i=0;i<N;i++ )	
	{
		for ( int j=0;j<N;j++ )	
			printf("%9d ",dp[i][j]);
		cout << endl;
	}*/

	for ( int i=1;i<=N;i++ )
	{
		int cnt = 0;
		for ( int j=1;j<=N;j++ )
		{
			if ( (i != j) && dp[i][j] != INIT_VAL )
				cnt++;
		}
		for ( int j=1;j<=N;j++ )
		{
			if ( (i != j) && dp[j][i] != INIT_VAL )
				cnt++;
		}
		if ( cnt == (N-1) )
			p_cnt++;
	}
	printf("%d\n",p_cnt);

	return 0;
}
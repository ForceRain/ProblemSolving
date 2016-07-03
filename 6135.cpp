#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define INIT_VAL 0x10000000

int dp[1001][1001];

int main(void)
{
	int N,M,T;
	freopen("test.txt","r",stdin);
	for ( int i=0;i<1001;i++ )	for ( int j=0;j<1001;j++ )	dp[i][j] = INIT_VAL;
	scanf("%d%d%d",&N,&M,&T);

	for ( int i=0;i<M;i++ )
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		dp[a][b] = c;
	}

	for ( int k=1;k<=N;k++ )
	{
		for ( int i=1;i<=N;i++ )
		{
			for ( int j=1;j<=N;j++ )
			{
				int checking = max(dp[i][k],dp[k][j]);
				if ( ( i != j ) && ( dp[i][j] > checking ) )
					dp[i][j] = checking;
			}
		}
	}

	for ( int i=0;i<T;i++ )
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if ( dp[a][b] == INIT_VAL )
			printf("-1\n");
		else
			printf("%d\n",dp[a][b]);
	}

	return 0;
}
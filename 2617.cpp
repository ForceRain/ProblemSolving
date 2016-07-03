#include <iostream>
#include <cstdio>

#define INIT_VAL 0x10000000

using namespace std;

int dp[101][101];

int main(void)
{
	int N,M;
	for ( int i=0;i<101;i++ )	for ( int j=0;j<101;j++ )	dp[i][j] = INIT_VAL;
	freopen("test.txt","r",stdin);
	scanf("%d%d",&N,&M);

	for ( int i=0;i<M;i++ )
	{
		int a,b;
		scanf("%d%d",&a,&b);
		dp[b][a] = 1;
	}

	for ( int k=1;k<=N;k++ )
	{
		for ( int i=1;i<=N;i++ )
		{
			for ( int j=1;j<=N;j++ )
			{
				if ( ( i != j ) && (dp[i][j] > dp[i][k] + dp[k][j] ) )
					dp[i][j] = dp[i][k] + dp[k][j];
			}
		}
	}

	for ( int i=1;i<=N;i++ )
	{
		for ( int j=1;j<=N;j++ )
			printf("%9d ",dp[i][j]);
		cout<<endl;
	}
	int counter = 0;
	for ( int i=1;i<=N;i++ )
	{
		bool R = false, C = false;
		for ( int j=1;j<=N;j++ )
		{
			if ( dp[i][j] != INIT_VAL )
				R = true;
		}
		for ( int j=1;j<=N;j++ )
		{
			if ( dp[j][i] != INIT_VAL )
				C = true;
		}
		if ( !(R && C) )
			counter++;
	}
	printf("%d\n",counter);

	return 0;
}
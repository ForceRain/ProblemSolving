#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int dp[1001][1001];

int main(void)
{
	int N,M,a,b,w;
	scanf("%d%d",&N,&M);
	for (int i=0;i<=1000;i++)	for (int j=0;j<=1000;j++)
		dp[i][j]=0x12341234;
	N--;
	for (int i=0;i<N;i++)
	{
		scanf("%d%d%d",&a,&b,&w);
		dp[a][b]=w;
		dp[b][a]=w;
	}
	N++;
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=N;j++)
		{
			for (int k=1;k<=N;k++)
			{
				if (dp[i][j]>dp[i][k]+dp[k][j])
					dp[i][j]=dp[i][k]+dp[k][j];
			}
		}
	}

	for (int i=0;i<M;i++)
	{
		scanf("%d%d",&a,&b);
		printf("%d\n",dp[a][b]);
	}

	return 0;
}
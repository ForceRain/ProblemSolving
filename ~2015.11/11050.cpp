#include <iostream>
#include <cstdio>

using namespace std;

int dp[11][11];

int main(void)
{
	for (int i=0;i<11;i++)
	{
		for (int j=0;j<=i;j++)
		{
			if (i==j || j==0)
				dp[i][j]=1;
			else
				dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
		}
	}

	int N,K;
	scanf("%d%d",&N,&K);
	printf("%d\n",dp[N][K]);
	return 0;
}

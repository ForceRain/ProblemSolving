#include <iostream>
#include <cstdio>

using namespace std;

unsigned long long dp[101][101];

int main(void)
{
	unsigned long long n,k;

	for (int i=1;i<101;i++)
	{
		for (int j=0;j<=i;j++)
		{
			if (i==j || j==0)
				dp[i][j]=1;
			else
				dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
		}
	}
	for (int i=1;i<101;i++)
	{
		for (int j=0;j<101;j++)
			printf("%p ",dp[i][j]);
		printf("\n");
	}

	while (true)
	{
		cin>>n>>k;

		if (n==0 && k==0)
			break;
		cout<<dp[n][k]<<endl;
	}
	return 0;
}
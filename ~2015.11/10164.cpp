#include <iostream>

using namespace std;

unsigned long long dp[31][31];

int main(void)
{
	int N,M,K;
	cin>>N>>M>>K;
	/*
	if (N>M)
	{
		int tmp=N;
		N=M;
		M=tmp;
	}*/
	for (int i=0;i<31;i++)
		dp[0][i]=1;

	for (int i=1;i<31;i++)
	{
		for (int j=0;j<=i;j++)
		{
			if (i==j || j==0)
				dp[i][j]=1;
			else
				dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
		}
	}
	/*
	for (int i=0;i<16;i++)
	{
		for (int j=0;j<16;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}*/

	if (K==0)
		cout<<dp[N+M-2][M-1]<<endl;
	else
	{
		int x=(K%M==0)?(K/M):((K/M)+1);
		int y=(K%M==0)?M:(K%M);
	//	cout<<x<<" ,"<<y<<endl;
		cout<<dp[x+y-2][y-1]*dp[N+M-x-y][M-y]<<endl;
	}

	return 0;
}
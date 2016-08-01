#include <iostream>

#define my_max(a,b) (((a)>(b))?(a):(b))

using namespace std;

int w[21];
int happiness[21];
int dp[21][101];

int main(void)
{
	int N;
	cin>>N;

	for (int i=1;i<=N;i++)
		cin>>w[i];
	for (int i=1;i<=N;i++)
		cin>>happiness[i];

	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=100;j++)
		{
			if (j>w[i])
				dp[i][j]=my_max(dp[i-1][j],dp[i-1][j-w[i]]+happiness[i]);

			else
				dp[i][j]=dp[i-1][j];
		}
	}
	cout<<dp[N][100]<<endl;

	return 0;
}
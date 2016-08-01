#include <iostream>

using namespace std;

int songs[101];
int N,M,max_volume;
int total_max=-1;
int dp[101][101];

int main(void)
{
	cin>>N>>M>>max_volume;

	for (int i=1;i<=N;i++)
		cin>>songs[i];

	dp[0][0]=M;
	for (int j=0;j<N;j++)
	{
		for (int i=0;i<=j;i++)
		{
			if ((0<= dp[i][j]) && (dp[i][j]<=max_volume))
			{
				int val_1=dp[i][j]+songs[j+1];
				int val_2=dp[i][j]-songs[j+1];

				if (val_1<=max_volume)
					dp[i][j+1]=((dp[i][j+1]<val_1)?dp[i][j+1]:val_1);

				if (val_2>=0)
					dp[i+1][j+1]=((dp[i+1][j+1]<val_2)?dp[i+1][j+1]:val_2);
			}
		}
	}
	for (int i=0;i<=N;i++)
	{
		for (int j=0;j<=N;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}

	for (int i=0;i<N;i++)
	{
		if (dp[i][N]>total_max)
			total_max=dp[i][N];
	}
	cout<<total_max<<endl;

	return 0;
}
#include <iostream>

#define my_max(a,b) (((a)>(b))?(a):(b))

using namespace std;

int dp[1001][1001];
int length[1001];

int main(void)
{
	int N;
	cin>>N;

	for (int i=1;i<=N;i++)
	{
		cin>>length[i];
	}

	for (int diagonal=1;diagonal<=(N-1);diagonal++)
	{
		for (int i=1;i<=N-diagonal;i++)
		{
			int j=i+diagonal;
			int val2=-1,val1,min=length[i],max=length[i];
			for (int k=i;k<=j;k++)
			{
				if (min>length[k])
					min=length[k];
				if (max<length[k])
					max=length[k];
			}
			val1=max-min;
		//	cout<<val1<<endl;
			for (int k=i;k<j;k++)
			{
				if (val2<my_max(val1,dp[i][k]+dp[k+1][j]))
					val2=my_max(val1,dp[i][k]+dp[k+1][j]);
			}
			dp[i][j]=val2;
		}
	}
	/*
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=N;j++)
			cout<<dp[i][j]<<" ";
		cout<<endl;
	}*/

	cout<<dp[1][N]<<endl;

	return 0;
}
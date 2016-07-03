#include <cstdio>
#include <iostream>
#include <cmath>

#define INIT_VAL 0x10000000

using namespace std;

pair<int,int> container[101];
int dp[110][110];

int main(void)
{
	int test;
	scanf("%d",&test);

	for ( int p=0;p<test;p++ )
	{
		for ( int k=0;k<110;k++ )	for ( int j=0;j<110;j++ )	dp[k][j] = INIT_VAL;
		int N;
		scanf("%d",&N);
		scanf("%d%d",&container[0].first,&container[0].second);
		for ( int j=1;j<=N;j++ )
			scanf("%d%d",&container[j].first,&container[j].second);
		scanf("%d%d",&container[N+1].first,&container[N+1].second);

		int lim = N+2;
		for ( int k=1;k<=lim;k++ )
		{
			for ( int j=1;j<=lim;j++ )
			{
				if ( k != j )
				{
					int tmp = abs(container[k-1].first-container[j-1].first) + abs(container[k-1].second-container[j-1].second);
					if ( tmp <= 1000 )
						dp[k][j] = tmp;
				}
			}
		}

		for ( int k=1;k<=lim;k++ )
		{
			for ( int i=1;i<=lim;i++ )
			{
				for ( int j=1;j<=lim;j++ )
				{
					int tVal = dp[i][k] + dp[k][j];
					if ( ( i != j ) && dp[i][j] > tVal )
						dp[i][j] = tVal;
				}
			}
		}

		for ( int i=1;i<=lim;i++ )
		{
			for ( int j=1;j<=lim;j++ )
				cout<<dp[i][j]<<" ";
			cout<<endl;
		}
	}

	return 0;
}
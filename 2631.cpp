#include <iostream>
#include <cstdio>

using namespace std;

int space[1001];
int dp[1001];

int main(void)
{
	int N;
	scanf("%d",&N);

	for ( int i=1;i<=N;i++ )	scanf("%d",&space[i]);

	for ( int i=1;i<=N;i++ )	dp[i] = 1;

	for ( int i=1;i<=N;i++ )
	{
		int val = dp[i];
		for ( int j=i-1;j>0;j-- )
		{
			if ( space[i] > space[j] )
			{
				if ( dp[j]+1 > val )
					val = dp[j]+1;
			}
		}
		if ( dp[i] < val )
			dp[i] = val;
	}

	int max = -1;
	for ( int i=1;i<=N;i++ )	if ( dp[i] > max )	max = dp[i];

	printf("%d\n",N-max);

	return 0;
}
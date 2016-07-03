#include <iostream>
#include <cstdio>

using namespace std;

int values[1001];
int dp[1001];
int usedOne[1001];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);
	
	for ( int i = 1 ; i <= N ; i++ )
	{
		scanf("%d",&values[i]);
		dp[i] = values[i];
	}

	for ( int j = 1 ; j <= N ; j++ )
	{
		if ( ((j + 1) <= N) && ( j != (N-2) ) )
		{
			if ( ( dp[j+1] < dp[j] + values[j+1] ) && ( usedOne[j] == 0 ) )
			{
				dp[j+1] = dp[j] + values[j+1];
				usedOne[j+1] = 1;
			}
		}
		if ( (j+2) <= N )
		{
			if ( dp[j+2] < dp[j] + values[j+2] )
			{
				dp[j+2] = dp[j] + values[j+2];
				usedOne[j+2] = 0;
			}
		}
	}

	printf("%d\n",dp[N]);

	return 0;
}
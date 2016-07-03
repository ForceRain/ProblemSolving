#include <iostream>
#include <cstdio>

using namespace std;

long long dp[20001];

int main(void)
{
	dp[0] = 1;
	for ( int i=1;i<=20000;i++ )
	{
		long long tmp = dp[i-1] * i;
		if ( ( tmp % 10 ) == 0 )
			while ( (tmp % 10) == 0 )
				tmp /= 10;
		dp[i] = tmp%1000000;
	}

	int N,test;
	scanf("%d",&test);
	for ( int i=0;i<test;i++ )
	{
		scanf("%d",&N);
		printf("%lld\n",dp[N]%10);
	}

	return 0;
}
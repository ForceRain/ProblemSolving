#include <iostream>
#include <cstdio>

#define INIT_VAL 0x10000000

using namespace std;

int guiLine[50][2];
int dp[301];

int main(void)
{
	int N,M;
	freopen("test.txt","r",stdin);
	for ( int i=0;i<301;i++ )	dp[i] = INIT_VAL;
	scanf("%d%d",&N,&M);

	for ( int i=0;i<M;i++ )
		scanf("%d%d",&guiLine[i][1],&guiLine[i][0]);

	dp[0] = 0;
	for ( int i=1;i<=300;i++ )
	{
		for ( int j=0;j<M;j++ )
		{
			int v1 = INIT_VAL,v2 = INIT_VAL;
			if ( ( i-1 ) >= 0 )
				v1 = dp[i-1] + guiLine[j][0] ;
			if ( ( i-6 ) >= 0 )
				v2 = dp[i-6] + guiLine[j][1];

			if ( (v1 > v2) && (dp[i] > v2) )
				dp[i] = v2;
			else if ( (v1 < v2) && (dp[i] > v1) )
				dp[i] = v1;
		}
	}
	int curMin = dp[N];
	for ( int i=N+1;i<301;i++ )
		if ( curMin > dp[i] )
			curMin = dp[i];

	printf("%d\n",curMin);

	return 0;
}
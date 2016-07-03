#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int dp[1001];
char tmp[101];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	for ( int i=1;i<=1000;i++ )
	{
		sprintf(tmp,"%d",i);
		int len = strlen(tmp);
		bool okay = true;
		if ( len > 1 )
		{
			int diff = tmp[1]-tmp[0];
			for ( int i=2;i<len;i++ )
			{
				if ( diff != tmp[i]-tmp[i-1] )
					okay = false;
			}
		}
		if ( okay )
			dp[i] = dp[i-1] + 1;
		else
			dp[i] = dp[i-1];
	}
	
	scanf("%d",&N);
	printf("%d\n",dp[N]);

	return 0;
}
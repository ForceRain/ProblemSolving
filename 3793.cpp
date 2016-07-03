#include <iostream>
#include <cstdio>
#include <cstring>

#define my_max(a,b) (a>b)?a:b

using namespace std;

char str1[1001];
char str2[1001];
int dp[1001][1001];

int main(void)
{
	freopen("test.txt","r",stdin);
	while ( scanf("%s%s",str1,str2) != EOF )
	{
		memset(dp,0,sizeof(dp));
		int l1 = strlen(str1);
		int l2 = strlen(str2);

		for ( int i=1;i<=l1;i++ )
		{
			for ( int j=1;j<=l2;j++ )
			{
				if ( str1[i-1] == str2[j-1] )
					dp[i][j] = dp[i-1][j-1]+1;
				else
					dp[i][j] = my_max(dp[i-1][j],dp[i][j-1]);
			}
		}
		printf("%d\n",dp[l1][l2]);
	}
	
	return 0;
}
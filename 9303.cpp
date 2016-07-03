#include <iostream>
#include <cstdio>

using namespace std;

#define INIT_VAL -1.0

double dp[101][101];

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for ( int i=1;i<=test;i++ )
	{
		for (int l=0;l<101;l++)	for (int k=0;k<101;k++){
			if ( l==k )
				dp[l][k] = 1.0;
			else
				dp[l][k] = INIT_VAL;
		}
		int x,y;
		int N;
		scanf("%d",&N);
		scanf("%d%d",&x,&y);
		int M;
		scanf("%d",&M);
		for ( int j=0;j<M;j++ )
		{
			int a,b;
			double val;
			scanf("%d%d%lf",&a,&b,&val);
			if ( dp[a][b] < val)
				dp[a][b] = val;			
		}

		for ( int k=1;k<=N;k++ )
		{
			for ( int s=1;s<=N;s++ )
			{
				for ( int t=1;t<=N;t++ )
				{
					if ( (dp[s][k] > 0) && (dp[k][t] > 0) )
					{
						if ( ( s != t ) && dp[s][t] < dp[s][k] * dp[k][t] )
							dp[s][t] = dp[s][k] * dp[k][t];
					}
				}
			}
		}

	//	printf("Case %d: %lf\n",i,dp[x][y]);
		if ( dp[x][y] == -1 )
			dp[x][y] = 0;
		cout<<"Case "<<i<<": "<<dp[x][y]<<endl;
	}

	return 0;
}
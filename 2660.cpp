#include <iostream>
#include <cstdio>
#include <vector>

#define INIT_VAL 0x10000000

using namespace std;

int dp[100][100];
int num[101];
vector <int> container;

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	for ( int i=0;i<100;i++ )	for ( int j=0;j<100;j++ )	dp[i][j] = INIT_VAL;
	scanf("%d",&N);

	while ( true )
	{
		int a,b;
		scanf("%d%d",&a,&b);

		if ( (a == -1) && (b == -1) )
			break;
		dp[a][b] = 1;
		dp[b][a] = 1;
	}

	for ( int k=1;k<=N;k++ )
	{
		for ( int i=1;i<=N;i++ )
		{
			for ( int j=1;j<=N;j++ )
			{
				if ( ( i != j ) && (dp[i][j] > dp[i][k] + dp[k][j]) )
					dp[i][j] = dp[i][k] + dp[k][j];
			}
		}
	}
	/*
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=N;j++)
			printf("%9d ",dp[i][j]);
		cout<<endl;
	}
	*/
	for ( int i=1;i<=N;i++ )
	{
		int max_val = -1;
		for ( int j=1;j<=N;j++ )
		{
			if ( ( i != j ) && max_val < dp[i][j] )
				max_val = dp[i][j];
		}
		num[i] = max_val;
	}

	int min_val = 0x7FFFFFFF;
	for ( int i=1;i<=N;i++ )
	{
		if ( min_val > num[i] )
			min_val = num[i];
	}

	for ( int i=1;i<=N;i++ )
		if ( min_val == num[i] )
			container.push_back(i);
	int sz = container.size();
	printf("%d %d\n",min_val,sz);
	for ( int j=0;j<sz;j++ )
		printf("%d ",container[j]);
	printf("\n");

	return 0;
}
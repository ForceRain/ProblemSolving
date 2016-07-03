#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

#define INIT_VAL 0x10000000

int dp[120][120];
int cand[120];
bool visited[120];
vector < int > container[120];
int N;
int vPtr;

void DFS_Visit(int nd)
{
	for ( int i=1;i<=N;i++ )
	{
		if ( !visited[i] && (dp[i][nd] != INIT_VAL) )
		{
			visited[i] = true;
			container[vPtr].push_back(i);
			DFS_Visit(i);
		}
	}
}

void DFS()
{
	for ( int i=1;i<=N;i++ )
	{
		if ( !visited[i] )
		{
			visited[i] = true;
			container[vPtr].push_back(i);
			DFS_Visit(i);
			vPtr++;
		}
	}
}

int main(void)
{
	int M;
	for (int i=0;i<120;i++)	for (int j=0;j<120;j++)	dp[i][j] = INIT_VAL;
	freopen("test.txt","r",stdin);
	scanf("%d%d",&N,&M);

	for ( int i=0;i<M;i++ )
	{
		int a,b;
		scanf("%d%d",&a,&b);
		dp[a][b] = 1;
		dp[b][a] = 1;
	}

	for ( int k=1;k<=N;k++ )
	{
		for ( int i=1;i<=N;i++ )
		{
			for ( int j=1;j<=N;j++ )
			{
				if ( ( i != j ) && dp[i][j] > dp[i][k]+dp[k][j] )
					dp[i][j] = dp[i][k] + dp[k][j];
			}
		}
	}

	for ( int i=1;i<=N;i++ )
	{
		int max = -1;
		for ( int j=1;j<=N;j++ )
			if ( ( i != j ) && (max < dp[i][j]) && (dp[i][j] != INIT_VAL) )
				max = dp[i][j];
		for ( int j=1;j<=N;j++ )
			if ( ( i != j ) && (max < dp[j][i]) && (dp[i][j] != INIT_VAL) )
				max = dp[j][i];
		cand[i] = max;
	}

	DFS();
	/*
	for ( int i=0;i<vPtr;i++ )
	{
		for ( int j=0;j<container[i].size();j++ )
			cout<<container[i][j]<<" ";
		cout<<endl;
	}
	*/
	printf("%d\n",vPtr);
	for ( int i=0;i<vPtr;i++ )
	{
		int minVal = INIT_VAL;
		int minPos = container[i][0];
		int sz = container[i].size();

		for ( int j=0;j<sz;j++ )
		{
			if ( minVal > cand[container[i][j]] )
			{
				minVal = cand[container[i][j]];
				minPos = container[i][j];
			}
		}
		printf("%d\n",minPos);
	}

	return 0;
}
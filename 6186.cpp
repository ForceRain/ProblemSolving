#include <iostream>
#include <cstdio>

using namespace std;

char space[102][102];
bool visited[102][102];
int cnt;
int N,M;
int direction[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

void DFS_Visit(int x, int y)
{
	for (int i=0;i<4;i++)
	{
		int nx = direction[i][0] + x;
		int ny = direction[i][1] + y;
		if ( !visited[nx][ny] && space[nx][ny]=='#' )
		{
			visited[nx][ny] = true;
			DFS_Visit(nx,ny);
		}
	}
}

void DFS()
{
	for (int i=1;i<=N;i++)
	{
		for ( int j=1;j<=M;j++ )
		{
			if (!visited[i][j] && space[i][j]=='#')
			{
				visited[i][j] = true;
				DFS_Visit(i,j);
				cnt++;
			}
		}
	}
}

int main(void)
{
	freopen("test.txt","r",stdin);
	scanf("%d%d",&N,&M);

	for ( int i=0;i<M+1;i++ )
	{
		visited[0][i] = true;
		visited[N+1][i] = true;
	}

	for ( int i=0;i<N+1;i++ )
	{
		visited[i][0] = true;
		visited[i][M+1] = true;
	}

	for (int i=1;i<=N;i++)
		scanf("%s",(space[i]+1));

	DFS();
	printf("%d\n",cnt);

	return 0;
}
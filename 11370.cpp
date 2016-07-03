#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char space[1002][1002];
bool visited[1002][1002];
int N,M;
int direction[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

void DFS_Visit( int x, int y )
{
	for ( int i=0;i<4;i++ )
	{
		int nx = x + direction[i][0];
		int ny = y + direction[i][1];

		if ( !visited[nx][ny] && space[nx][ny]=='T' )
		{
			visited[nx][ny] = true;
			space[nx][ny] = 'S';
			DFS_Visit(nx,ny);
		}
	}
}

void DFS()
{
	for ( int i=1;i<=M;i++ )
	{
		for ( int j=1;j<=N;j++ )
		{
			if ( !visited[i][j] && space[i][j] == 'S' )
			{
				visited[i][j] = true;
				DFS_Visit(i,j);
			}
		}
	}
}

int main(void)
{
	freopen("test.txt","r",stdin);
	while ( true )
	{
		memset(visited,0,sizeof(visited));
		memset(space,0,sizeof(space));
		scanf("%d%d\n",&N,&M);
		
		if ( ( N == 0 ) && ( M == 0 ) )
			break;

		for (int i=1;i<=M;i++)
			scanf("%s\n",&space[i][1]);

		DFS();

		for ( int i=1;i<=M;i++ )
			printf("%s\n",space[i]+1);	
	}

	return 0;
}
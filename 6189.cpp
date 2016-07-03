#include <iostream>
#include <cstdio>

using namespace std;

char space[102][102];
bool visited[102][102];
int timeTab[102][102];
int cnt;
int last;
int N,M;
int direction[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
bool done = false;

void DFS_Visit(int x, int y)
{
	for (int i=0;i<4 && !done;i++)
	{
		int nx = direction[i][0] + x;
		int ny = direction[i][1] + y;
		if ( !visited[nx][ny]  )
		{
			if ( space[nx][ny]=='.' )
			{
				visited[nx][ny] = true;
				timeTab[nx][ny] = cnt++;
				DFS_Visit(nx,ny);
			}
			else if ( space[nx][ny]=='C' )
			{
				done = true;
				last = cnt;
			}
		}
	}
}

void DFS()
{
	int Bx,By;
	for (int i=1;i<=N;i++)
	{
		for ( int j=1;j<=M;j++ )
		{
			if ( space[i][j] == 'B' )
			{
				Bx = i;By = j;
			}
		}
	}
	
	visited[Bx][By] = true;
	timeTab[Bx][By] = cnt++;
	DFS_Visit(Bx,By);
	printf("%d\n",last - timeTab[Bx][By]);
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

	return 0;
}
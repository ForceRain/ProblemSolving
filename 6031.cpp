#include <iostream>
#include <cstdio>

using namespace std;

int W,H;
char space[752][752];
bool visited[752][752];
int direction[8][2] = { {1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,-1},{1,-1},{-1,1} };
int maximum;
int counter;

void DFS_Visit( int x,int y  )
{
	for ( int i=0;i<8;i++ )
	{
		int nx = x + direction[i][0];
		int ny = y + direction[i][1];
		if ( !visited[nx][ny] && ( space[nx][ny] == '.' ) )
		{
			visited[nx][ny] = true;
			counter++;
			DFS_Visit(nx,ny);
		}
	}
}

void DFS()
{
	maximum = -1;
	for ( int i=1;i<=H;i++ )
	{
		for ( int j=1;j<=W;j++ )
		{
			if ( !visited[i][j] && ( space[i][j] == '.' ) )
			{
				visited[i][j] = true;
				counter = 1;
				DFS_Visit( i,j );
				if ( counter > maximum )
					maximum = counter;
			}
		}
	}
}

int main(void)
{
	freopen("test.txt","r",stdin);
	scanf("%d%d",&W,&H);
	for ( int i=0;i<=H;i++ )
	{
		visited[i][0] = true;
		visited[i][W+1] = true;
	}

	for ( int i=0;i<=W;i++ )
	{
		visited[0][i] = true;
		visited[H+1][i] = true;
	}

	for ( int i=1;i<=H;i++ )
		scanf("%s",&(space[i][1]));

	DFS();
	printf("%d\n",maximum);

	return 0;
}
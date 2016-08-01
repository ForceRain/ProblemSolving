#include <iostream>
#include <cstdio>

using namespace std;

char space[105][105];
bool visited[105][105];
int N,M;
int cnt;
int direction[4][2]={{0,1},{0,-1},{1,0},{-1,0}};

void DFS_Visit(int x,int y)
{
	for (int i=0;i<4;i++)
	{
		int n_x=x+direction[i][0];
		int n_y=y+direction[i][1];
		if ( (space[n_x][n_y] == '#' ) && !visited[n_x][n_y] )
		{
			visited[n_x][n_y]=true;
			DFS_Visit(n_x,n_y);
		}
	}
}

void DFS()
{
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=M;j++)
		{
			if ( (space[i][j] == '#') && !visited[i][j] )
			{
				visited[i][j]=true;
				DFS_Visit(i,j);
				cnt++;
			}
		}
	}
}

int main(void)
{
	int test;
	scanf("%d",&test);
	for (int k=0;k<test;k++)
	{
		cnt=0;
		memset(space,0,sizeof(space));
		memset(visited,0,sizeof(visited));
		for ( int l=0;l<102; l++ )
		{
			visited[0][l]=true;
			visited[l][0]=true;
			visited[101][l]=true;
			visited[l][101]=true;
		}

		scanf("%d%d",&N,&M);
		for (int i=1;i<=N;i++)
			scanf("%s",&(space[i][1]));
		DFS();
		printf("%d\n",cnt);
	}

	return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

char mapp[102][102];
bool visited[102][102];
int N,M;
int direction[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };

int DFS_Visit( int x, int y )
{
	int sum = 1;
	for (int i=0;i<4;i++)
	{
		int nx = direction[i][0] + x;
		int ny = direction[i][1] + y;
		if ( !visited[nx][ny] && mapp[nx][ny]=='#' )
		{
			visited[nx][ny] = true;
			sum+=DFS_Visit(nx,ny);
		}
	}
	return sum;
}

int DFS()
{
	int max = -1;
	for ( int i=1;i<=N;i++ )
	{
		for (int j=1;j<=M;j++)
		{
			if ( !visited[i][j] && (mapp[i][j]=='#') )
			{
				visited[i][j] = true;
				int tmp = DFS_Visit( i,j );
				if ( max < tmp )
					max = tmp;					
			}
		}
	}
	return max;
}

int main(void)
{
	int E;
	freopen("test.txt","r",stdin);
	scanf("%d%d%d",&N,&M,&E);

	for ( int i = 0 ; i<N+1 ; i++ ){	visited[i][0] = true;	visited[i][M+1] = true;	}
	for ( int j = 0 ; j < M+1 ; j++){	visited[0][j] = true;	visited[N+1][j] = true;	}

	for (int i=0;i<E;i++)
	{
		int rp,cp;
		scanf("%d%d",&rp,&cp);
		mapp[rp][cp] = '#';
	}

	printf("%d\n",DFS());

	return 0;
}
#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

typedef struct _node
{
	int x;
	int y;
	int cost;
	_node ( int xx,int yy,int cc ) : x(xx), y(yy), cost(cc) {}
}Node;

char space[52][52];
bool visited[52][52];
int R,C;
int maxo;
int direction[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

int BFS_visit( int x,int y )
{
	int maxi = -1;
	queue< Node > container;
	container.push( Node (x,y,0) );
	while ( !container.empty() )
	{
		Node tmp = container.front();
		container.pop();

		if ( maxi < tmp.cost )
			maxi = tmp.cost;

		for ( int i = 0; i < 4 ; i++ )
		{
			int nx = tmp.x + direction[i][0];
			int ny = tmp.y + direction[i][1];

			if ( !visited[nx][ny] && space[nx][ny] == 'L' )
			{
				visited[nx][ny] = true;
				container.push( Node (nx,ny,tmp.cost+1) );
			}
		}
	}
	return maxi;
}

void BFS()
{
	maxo = -1;
	for ( int i=1;i<=R;i++ )
	{
		for ( int j=1;j<=C;j++ )
		{
			if ( !visited[i][j] && space[i][j] == 'L' )
			{
				visited[i][j] = true;
				int val = BFS_visit(i,j);
				if ( val > maxo )
					maxo = val;
			}

			for ( int k=1;k<=R;k++ )	for ( int l=1;l<=C;l++ )
				visited[k][l] = false;
		}
	}
	
}

int main(void)
{
	freopen("test.txt","r",stdin);
	scanf("%d%d",&R,&C);

	for ( int i=0;i<=R;i++ )
	{
		visited[i][0] = true;
		visited[i][R+1] = true;
	}

	for ( int j=0;j<=C;j++ )
	{
		visited[0][j] = true;
		visited[0][j+1] = true;
	}

	for ( int i=1;i<=R;i++ )
		scanf( "%s" , ( &space[i][1] ) );

	BFS();
	printf("%d\n",maxo);

	return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

char space[50][50];
char result[50][50];
int direction[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

int main(void)
{
	int R,C;
	freopen("test.txt","r",stdin);
	scanf("%d%d",&R,&C);

	for ( int i=0;i<50;i++ )	for ( int j=0;j<50;j++ )	
	{
		result[i][j]= '.';
		space[i][j] = '.';
	}

	for ( int i=1;i<=R;i++ )
		scanf("%s",&(space[i][1]));
	
	for ( int i=1;i<=R;i++ )		space[i][C+1]='.';

	int stx = R,sty = C;
	int destx = 0,desty = 0;

	for ( int i=1;i<=R;i++ )
	{
		for ( int j=1;j<=C;j++ )
		{
			int counter = 0;
			for ( int k=0;k<4;k++ )
			{
				int nx = direction[k][0]+i;
				int ny = direction[k][1]+j;
				if ( space[nx][ny] == '.' )
					counter++;
			}
			if ( counter >= 3 )
				result[i][j] = '.';
			else
				result[i][j] = space[i][j];
		}
	}
	for ( int i=1;i<=R;i++ )
	{
		for ( int j=1;j<=C;j++ )
		{
			if ( result[i][j] == 'X' )
			{
				if ( stx > i )	stx = i;
				if ( destx < i )	destx = i;
				if ( sty > j )	sty = j;
				if ( desty < j )	desty = j;
			}
		}
	}

	for ( int i=stx;i<=destx;i++ )
	{
		for ( int j=sty;j<=desty;j++ )
			printf("%c",result[i][j]);
		printf("\n");
	}

	return 0;
}
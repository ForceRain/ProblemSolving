#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);
	
	for ( int i=0;i<test;i++ )
	{
		int sx,sy,dx,dy;
		scanf("%d%d%d%d",&sx,&sy,&dx,&dy);
		int numCircle;
		scanf("%d",&numCircle);
		int counter = 0;
		for ( int j=0;j<numCircle;j++ )
		{
			int cx,cy,cr;
			scanf("%d%d%d",&cx,&cy,&cr);
			int p2x = ( cx-sx ) * ( cx-sx );
			int p2y = ( cy-sy ) * ( cy-sy );
			int pp2x = ( cx-dx ) * ( cx-dx );
			int pp2y = ( cy-dy ) * ( cy-dy );

			if ( ( p2x + p2y ) < ( cr*cr ) )
			{
				if ( ( pp2x + pp2y ) < ( cr*cr ) ){}
				else		counter ++;
			}
			else
			{
				if ( ( pp2x + pp2y ) < ( cr*cr ) )	counter++;
			}
		}
		printf("%d\n",counter);
	}

	return 0;
}
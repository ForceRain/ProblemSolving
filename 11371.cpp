#include <cstdio>
#include <cmath>

using namespace std;

#define PI 3.141592

int main(void)
{
	int x,y;
	while ( true )
	{
		scanf("%d%d",&x,&y);
		if ( x==0 && y==0 )
			break;

		double len = sqrt( x*x+y*y );
		double value = asin( y / len );

		printf("%.0lf\n",value*(180/PI));
	}
	return 0;
}

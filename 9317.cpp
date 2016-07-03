#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	freopen("test.txt","r",stdin);
	while ( true )
	{
		double D;
		int Rh,Rv;
		scanf("%lf%d%d",&D,&Rh,&Rv);

		if ( ( D == 0 ) && ( Rh == 0 ) && ( Rv == 0 ) )	break;

		double W = ( 16.0 * D ) / sqrt(337);
		double H = 9.0/16*W;
		printf("Horizontal DPI: %.2lf\n",(double)Rh/W);
		printf("Vertical DPI: %.2lf\n",(double)Rv/H);
	}
	return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	double a1,a2,a3;
	int N;
	freopen("test.txt","r",stdin);
	while ( true )
	{
		scanf("%lf%lf%lf%d",&a1,&a2,&a3,&N); 
		if ( a1 == -1 )
			break;

		printf("Month %d cost: $",N);
		if ( N == 1 )	printf("%.2lf\n",a1);
		else if ( N == 2 )	printf("%.2lf\n",a2);
		else if ( N == 3 )	printf("%.2lf\n",a3);
		else
		{
			for ( int j=4;j<=N;j++ )
			{
				double nVal = (a1*a2)/a3;
				a1 = a2;
				a2 = a3;
				a3 = nVal;
			}
			printf("%.2lf\n",a3);
		}
	}
	return 0;
}
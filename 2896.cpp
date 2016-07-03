#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	double arr1[3];
	double arr2[3];

	scanf("%lf%lf%lf",&arr1[0],&arr1[1],&arr1[2]);
	scanf("%lf%lf%lf",&arr2[0],&arr2[1],&arr2[2]);

	double minK = 1000.0;
	for ( int i=0;i<3;i++ )
	{
		if ( arr1[i]/arr2[i] < minK )
			minK = arr1[i]/arr2[i];
	}

	printf("%lf %lf %lf\n",arr1[0]-arr2[0]*minK,arr1[1]-arr2[1]*minK,arr1[2]-arr2[2]*minK);

	return 0;
}
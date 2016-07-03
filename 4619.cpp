#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	int B,N;
	freopen("test.txt","r",stdin);

	while ( true )
	{
		scanf("%d%d",&B,&N);
		if ( ( B == 0 ) && ( N == 0 ) )
			break;

		long long A = 1;
		long long theVal = 1;
		int divPoint = 1;
		int divDistance = 0x7FFFFFFF;

		while ( true )
		{
			if ( divDistance > abs(theVal-B) )
			{
				divDistance = abs(theVal-B);
				divPoint = A;
			}
			else if ( divDistance < abs(theVal-B) )
				break;

			A++;
			theVal = 1;
			for ( int j=0;j<N;j++ )	theVal *= A;		
		}
		printf("%d\n",A-1);
	}
	return 0;
}
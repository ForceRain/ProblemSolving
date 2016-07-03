#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	int N;
	while ( true )
	{
		scanf("%d",&N);
		if ( N == 0 )
			break;
		
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		
		if ( ( (b%a) == 0 ) && ( ( c%b ) == 0) && ( b/a == c/b ) )
		{
			int r = b/a;
			printf("%llu\n",( a * ( pow(r,N) / (r-1) ) ));
		}
		else
		{
			int d = b-a;
			printf("%llu\n",((N * ( 2*a + (N-1)*d ))/2));
		}
	}
	return 0;
}
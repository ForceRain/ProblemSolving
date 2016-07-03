#include <iostream>
#include <cstdio>

#define my_triple(x) (x)*(x)*(x)

using namespace std;

int main(void)
{
	freopen("result.txt","w",stdout);
	for ( int a=2;a<=100;a++ )
	{
		for ( int b=2;b<=a;b++ )
		{
			for ( int c=b+1;c<=a;c++ )
			{
				for ( int d=c+1;d<=a;d++ )
				{
					if ( my_triple(a) == my_triple(b) + my_triple(c) + my_triple(d) )
						printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
				}
			}
		}
	}
	return 0;
}
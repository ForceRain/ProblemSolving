#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int a,b,c;
	while ( true )
	{
		scanf("%d%d%d",&a,&b,&c);

		if ( ( a == 0 ) && ( b == 0 ) && ( c == 0 ) )
			break;

		int f1 = a;
		int f2 = b;
		int f3 = 0;
		for ( int i=1;i<=c;i++ )
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		printf("%d\n",f3);
	}

	return 0;
}
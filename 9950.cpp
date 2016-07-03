#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int a,b,c;
	
	freopen("test.txt","r",stdin);
	while ( true )
	{
		scanf("%d%d%d",&a,&b,&c);

		if ( ( a == 0 ) && ( b == 0 ) && ( c == 0 ) )
			break;

		if ( a == 0 )
			a = c/b;
		if ( b == 0 )
			b = c/a;
		if ( c == 0 )
			c = a*b;
		printf("%d %d %d\n",a,b,c);
	}

	return 0;
}
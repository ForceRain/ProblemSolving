#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	freopen("test.txt","r",stdin);
	while ( true )
	{
		int N;
		scanf ( "%d", &N );
		if ( N == 0 )	break;

		int bef = -1;
		int val;
		for ( int i=0;i<N;i++ )
		{
			scanf( "%d", &val );
			if ( val != bef )
				printf("%d ",val);
			bef = val;
		}
		printf("$\n");
	}
	return 0;
}
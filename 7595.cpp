#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	while ( true )
	{
		scanf("%d",&N);
		if ( N == 0 )	break;

		for ( int i=1;i<=N;i++ )
		{
			for ( int j=1;j<=i;j++ )
				printf("*");
			printf("\n");
		}
	}
	return 0;
}
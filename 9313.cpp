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

		if ( N == -1 )
			break;

		unsigned int res = 0;
		int one = 1;
		for ( int i=1;i<32;i++ )
		{
			res = res | ( N & one );
			N = N >> 1;
			res = res << 1;
		}
		printf("%u\n",res);
	}
	return 0;
}
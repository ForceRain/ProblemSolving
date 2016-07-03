#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for ( int i=0;i<test;i++ )
	{
		int N;
		scanf("%d",&N);

		printf("Case %d:\n",i+1);

		int lim = N/2;
		for ( int j=1; j<=lim;j++ )
		{
			if ( (1 <= N-j) && (N-j <= 6) )
			printf("(%d,%d)\n",j,N-j);
		}
	}

	return 0;
}
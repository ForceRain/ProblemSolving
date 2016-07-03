#include <iostream>
#include <cstdio>

using namespace std;

int factor[101];

int main(void)
{
	int test;
	scanf("%d",&test);

	for ( int i=1;i<=test;i++ )
	{
		int N;
		scanf("%d",&N);
		
		for (int j=0;j<N+1;j++)
			scanf("%d",&factor[j]);
		int divN = N--;
		for ( int j=0;j<N+1;j++,divN-- )
			factor[j] = factor[j]*divN;

		printf("Case %d: %d ",i,N);
		for ( int j=0;j<N+1;j++ )
			printf("%d ",factor[j]);
		printf("\n");
	}

	return 0;
}
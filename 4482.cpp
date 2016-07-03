#include <stdio.h>

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
	{
		int val;
		scanf("%d",&val);

		long long value = val;
		printf("%d: %d %lld\n", i+1 , val , (value*(value+1)*(value+2)/6) );
	}

	return 0;
}
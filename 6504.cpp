#include <iostream>
#include <cstdio>

using namespace std;

int fib[26];

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	fib[1] = 1;
	fib[2] = 2;
	for ( int i=3;i<=25;i++ )
		fib[i] = fib[i-1] + fib[i-2];

	for ( int i=0;i<test;i++ )
	{
		int val;
		int transform[30] = {0};
		scanf("%d",&val);

		for ( int j=25;j>=1;j-- )
		{
			if ( ( val - fib[j] ) >= 0 )
			{
				val -= fib[j];
				transform[j] = 1;
			}
		}
		int summation = 0;
		for ( int j=1;j<=25;j++ )
			summation += (transform[j+1] * fib[j] );
		
		printf("%d\n",summation);
	}

	return 0;
}
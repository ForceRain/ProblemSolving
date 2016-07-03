#include <iostream>
#include <cstdio>

using namespace std;

int primes[1000001];

int main(void)
{
	for ( int j=0;j<1000001;j++ )	primes[j] = 1;
	primes[0] = primes[1] = 0;
	for ( int i=2;i<=1000000;i++ )
	{
		for ( int k=2*i;k<=1000000;k+=i )
			primes[k]=0;
	}

	int val;
	freopen("test.txt","r",stdin);
	while ( true )
	{
		scanf("%d",&val);
		if ( val == 0 )
			break;

		for ( int i=2;i<=val;i++ )
		{
			if ( ( primes[i] == 1 ) && ( primes[val-i] == 1) )
			{
				printf("%d = %d + %d\n",val,i,val-i);
				break;
			}
		}
	}

	return 0;
}
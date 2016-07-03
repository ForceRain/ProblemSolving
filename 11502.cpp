#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int primes[1001];
vector <int > container;

int main(void)
{
	for ( int i=0;i<1001;i++ )	primes[i] = 1;
	primes[0] = primes[1] =  0;
	for ( int i=2;i<1001;i++ )
	{
		for ( int j=2*i;j<1001;j+=i )
			primes[j] = 0;
	}
	for ( int i=0;i<1001;i++ )	if ( primes[i] == 1 )	container.push_back( i );

	int test;
	int sz = container.size();

	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for ( int i=0;i<test;i++ )
	{
		int val;
		bool checked = false;
		scanf("%d",&val);
		
		for ( int j=0; ( j<sz && !checked );j++ )
		{
			for ( int k=0; ( k<sz && !checked );k++ )
			{
				for ( int l=0; ( l<sz && !checked );l++ )
				{
					if ( ( container[j]+container[k]+container[l] ) == val )
					{
						checked = true;
						printf("%d %d %d\n",container[j],container[k],container[l]);
					}
				}
			}
		}

		if ( !checked )	printf("0\n");
	}

	return 0;
}
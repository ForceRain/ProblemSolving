#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int N;
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
	{
		int A,B;
		scanf("%d%d",&A,&B);

		unsigned long long val = A/B;
		printf("%llu\n",val*val);
	}

	return 0;
}
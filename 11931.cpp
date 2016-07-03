#include <iostream>
#include <cstdio>

using namespace std;

int values[2000001];

int main(void)
{
	int N;
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		int val;
		scanf("%d",&val);
		values[val+1000000]++;
	}

	for ( int i=2000000;i>=0;i-- )
		if ( values[i] != 0 )
			printf("%d\n",i-1000000);

	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int values[25];

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);

	scanf("%d",&test);

	for ( int i=0;i<test;i++ )
	{
		int N,deadline;
		scanf("%d%d",&N,&deadline);

		for ( int j=0;j<N;j++ )
			scanf("%d",&values[j]);

		sort( values,values+N );
		int befSum = 0;
		for ( int j=0;j<N;j++ )
		{
			values[j] = values[j] + befSum;
			befSum = values[j];
		}

		int pos = upper_bound(values,values+N,deadline) - values;
		long long summation = 0;
		for ( int j=0;j<pos;j++ )
			summation += values[j];
		
		printf("Case %d: %d %d %lld\n",i+1,pos,values[pos-1],summation);
	}

	return 0;
}
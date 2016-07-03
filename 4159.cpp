#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <functional>

using namespace std;

int space[1500];

int main(void)
{
	freopen("test.txt","r",stdin);
	while ( true )
	{
		int N;
		scanf("%d",&N);

		if ( N==0 )
			break;

		for ( int i=0;i<N;i++ )
			scanf("%d",&space[i]);
		
		sort(space,space+N);
		int tmp = 1422-space[N-1];
		space[N] = space[N-1] + 2*tmp;

		for ( int i=N-1; i > 0 ; i-- )
		{
			int diff = space[i]-space[i-1];
			space[N+(N-i)] = space[N+(N-i)-1]+diff;
		}

		bool fail = false;
		for ( int i=2*N-1 ;i >= 1;i-- )
			if ( abs(space[i] - space[i-1]) > 200 )
				fail = true;

		if (fail)	printf("IMPOSSIBLE\n");
		else
			printf("POSSIBLE\n");
	}
	return 0;
}
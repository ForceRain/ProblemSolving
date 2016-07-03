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
		int N,D;
		scanf("%d%d",&N,&D);
		int cnt = 0;
		for ( int j=0;j<N;j++ )
		{
			int V,F,C;
			scanf("%d%d%d",&V,&F,&C);
			if ( D*C <= F*V )
				cnt++;
		}
		printf("%d\n",cnt);
	}

	return 0;
}
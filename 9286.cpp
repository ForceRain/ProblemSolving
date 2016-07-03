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
		int pals;
		scanf("%d",&pals);

		printf("Case %d:\n",i+1);
		for ( int j=0;j<pals;j++ )
		{
			int val;
			scanf("%d",&val);
			val++;
			if ( val<=6 )
				printf("%d\n",val);
		}
	}

	return 0;
}
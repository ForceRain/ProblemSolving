#include <iostream>
#include <cstdio>

using namespace std;

int mapper1[256];
char mapper2[27];

int main(void)
{
	int N;
	for ( int i=1;i<=26;i++ )	mapper2[i] = (i-1)+'A';
	for ( int i='A';i<='Z';i++ )	mapper1[i] = (i-'A')+1;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
	{
		int num,in2;
		char in,chc;
	
		scanf("%d %c",&num,&chc);
		getchar();
		if ( chc == 'C' )
		{
			for ( int j = 0; j < num ; j++ )
			{
				scanf("%c",&in);
				getchar();
				printf("%d ",mapper1[in]);
			}
			printf("\n");
		}
		else
		{
			for ( int j = 0; j < num ; j++ )
			{
				scanf("%d",&in2);
				printf("%c ",mapper2[in2]);
			}
			printf("\n");
		}
	//	getchar();
	}

	return 0;
}
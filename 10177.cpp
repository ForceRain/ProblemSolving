#include <iostream>
#include <cstdio>

using namespace std;

int space[101][101];

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for ( int k=0;k<test;k++ )
	{
		int N;
		scanf("%d",&N);

		for (int i=0;i<N;i++)	for ( int j=0;j<N;j++ )		scanf("%d",&space[i][j]);
		int bef = -1;
		bool checking = true;

		for ( int i=0;i<N;i++ )
		{
			int v1=0,v2=0;
			for ( int j=0;j<N;j++ )
				v1 += space[i][j];
			if ( bef == -1 )
				bef = v1;
			for ( int j=0;j<N;j++ )
				v2 += space[j][i];
			if ( v1 != v2 || v1 != bef )
			{
				checking = false;
				break;
			}
			bef = v1;
		}
		if (!checking)
			printf("Not a magic square\n");
		else
		{
			int v1=0,v2=0;
			for ( int i=0;i<N;i++ )
			{
				v1 += space[i][(N-1)-i];
				v2 += space[i][i];
			}
			if ( v1 != v2 )
				printf("Not a magic square\n");
			else
				printf("Magic square of size %d\n",N);
		}
	}

	return 0;
}
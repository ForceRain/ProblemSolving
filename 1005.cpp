#include <iostream>
#include <cstdio>
#include <queue>
#include <cstring>
using namespace std;

int buildings[1001];
int accRes[1001];
int connected[1001][1001];

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for ( int i=0;i<test;i++ )
	{
		memset(buildings,0,sizeof(buildings));
		memset(accRes,0,sizeof(accRes));
		int N,K,dest;
		scanf("%d%d",&N,&K);
		for ( int j=1;j<=N;j++ )	scanf("%d",&buildings[j]);
		for ( int j=1;j<=K;j++ )
		{
			int a,b;
			scanf("%d%d",&a,&b);
			connected[a][b] = 1;
		}
		scanf("%d",&dest);
		queue < int > container;
		container.push(1);
		accRes[dest] = buildings[dest];
		int max = -1;

		while ( !container.empty() )
		{
			int nd = container.front();
			container.pop();

			for ( int k=1;k<=N;k++ )
			{
				if ( connected[nd][k] )
				{
					container.push(k);
					if ( accRes[k] < accRes[nd] + buildings[k] )
						accRes[k] = accRes[nd] + buildings[k];
					if ( accRes[k] > max )
						max = accRes[k];
				}
			}
		}
		printf("%d\n",max);
	}

	return 0;
}
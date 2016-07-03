#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

#define INIT_VAL 0x2FFFFFFF

vector < pair<int,int> > edges[20001];
int nearest[20001];
int length[20001];

int main(void)
{
	int N,M;
	freopen("test.txt","r",stdin);
	scanf("%d%d",&N,&M);
	int start;
	scanf("%d",&start);

	for ( int i=0;i<M;i++ )
	{
		int a,b,w;
		scanf("%d%d%d",&a,&b,&w);
		edges[a].push_back(pair<int,int> (b,w));
	}

	for ( int i=1;i<=N;i++ )
	{
		nearest[i] = start;
		int getVal = INIT_VAL;
		int sz = edges[start].size();
		for ( int j=0;j<sz;j++ )
			if ( edges[start][j].first==i && getVal > edges[start][j].second )
				getVal = edges[start][j].second;
		length[i] = getVal;
	}

	for ( int i=1;i<=N;i++ )
	{
		int vertexNear = -1;
		int minimum = 0x7FFFFFFF;
		
		for ( int j=1;j<=N;j++ )
		{
			if ( j != start )
			{
				if ( 0 <= length[j] && length[j] <= minimum )
				{
					minimum = length[j];
					vertexNear = j ;
				}
			}
		}

		for ( int j=1;j<=N;j++ )
		{
			if ( j != start )
			{
				int getVal = INIT_VAL;
				int sz = edges[vertexNear].size();
				for ( int k =0 ;k<sz;k++ )
					if ( edges[vertexNear][k].first==j && getVal > edges[vertexNear][k].second )
						getVal = edges[vertexNear][k].second;

				if ( length[vertexNear] + getVal < length[j] )
				{
					length[j] = length[vertexNear] + getVal;
					nearest[j] = vertexNear;
				}
			}
		}
	}
	length[start] = 0;
	for ( int i=1;i<=N;i++ )
	{
		if ( length[i] != INIT_VAL )
			printf("%d\n",length[i]);
		else
			printf("INF\n");
	}
	return 0;
}
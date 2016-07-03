#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

int space[101];
bool visited[101];
int N;

int bomb_it( int pos, int t )
{
	int val = 0;
	if ( (pos - 1) >= 0 && ( pos + 1 ) < N)
	{
		if ( space[ pos-1 ] >= space[pos]-t  && !visited[pos-1] )
		{
			val++;
			visited[ pos-1 ] = true;
			val += bomb_it( pos-1,t+1 );
		}
		if ( space[ pos ] + t >= space[ pos+1 ] && !visited[pos+1] )
		{
			val++;
			visited[ pos+1 ] = true;
			val += bomb_it( pos+1,t+1 );
		}
	}		
	return val;
}

int main(void)
{
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
		scanf("%d",&space[i]);

	sort(space,space+N);

	int maxi = -1;
	for ( int i=0;i<N;i++ )
	{
		memset( visited, 0, sizeof(visited) );
		visited[i] = true;
		int tmp = bomb_it( i,1 );
		if ( tmp > maxi )
			maxi = tmp;
	}
	printf("%d\n",maxi+1);
	
	return 0;
}
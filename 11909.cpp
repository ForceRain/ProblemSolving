#include <iostream>
#include <cstdio>

using namespace std;

int space[3000][3000];
int cnt =0;
int N;

void explore( int i,int j )
{
	cout<<i<<","<<j<<endl;
	if ( ( i == (N-1) ) && ( j == ( N-1 ) ) )
		return;

	if ( (i+1) >= N )
	{
		if ( space[i][j] <= space[i][j+1] )
		{
			int diff = ( space[i][j+1] - space[i][j] ) + 1;
			space[i][j] += diff;
			cnt += diff;
		}
		explore( i,j+1 );
	}
	else if ( ( j+1 ) >= N )
	{
		if ( space[i][j] <= space[i+1][j] )
		{
			int diff = ( space[i+1][j] - space[i][j] ) + 1;
			space[i][j] += diff;
			cnt += diff;
		}
		explore( i+1,j );
	}
	else 
	{
		int a = space[i][j+1] - space[i][j];
		int b = space[i+1][j] - space[i][j];
		int move;

		if ( ( a >= 0 ) || ( b >= 0 ) )
		{
			if ( a > b )
			{
				move = 1;
				space[i][j] += ( a + 1 );
				cnt += ( a + 1 );
			}
			else
			{
				move = 2;
				space[i][j] += ( b + 1 );
				cnt += ( b + 1 );
			}
		}
		else
		{
			if ( a > b )
				move = 1;
			else
				move = 2;
		}
		if ( move == 1 )
			explore( i,j+1 );
		else
			explore( i+1,j );
	}
}

int main(void)
{
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
	{
		for ( int j=0;j<N;j++ )
			scanf( "%d" , &space[i][j] );
	}

	explore(0,0);
	printf("%d\n",cnt);

	return 0;
}
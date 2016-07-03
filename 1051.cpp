#include <iostream>
#include <cstdio>

using namespace std;

char space[51][51];

int main(void)
{
	int N,M;
	freopen("test.txt","r",stdin);
	scanf("%d%d",&N,&M);

	for ( int i=0;i<N;i++ )	scanf("%s",space[i]);

	int lim_size = (N>M) ? M : N;
	int bigLeng = -1;
	for ( int k=1;k<=lim_size;k++ )
	{
		int lim_X = N-k;
		int lim_Y = M-k;

		for ( int i=0;i<=lim_X;i++ )
		{
			for ( int j=0;j<=lim_Y;j++ )
			{
				int lx = i+(k-1);
				int ly = j+(k-1);
				if ( space[i][j] == space[lx][ly] && space[i][ly]== space[lx][j] && space[i][j] == space[i][ly] )
				{
					if ( bigLeng < k )
						bigLeng = k;
				}
			}
		}
	}
	printf("%d\n",bigLeng*bigLeng);

	return 0;
}
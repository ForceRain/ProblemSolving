#include <iostream>
#include <cstdio>

using namespace std;

int space[1001][1001];

int main(void)
{
	int N,M;
	scanf("%d%d",&N,&M);

	for (int i=0;i<N;i++)	for (int j=0;j<M;j++)	scanf("%d",&space[i][j]);

	for (int i=0;i<N;i++)
	{
		for (int j=0;j<M;j++)
		{
			int l_s=-1,u_s=-1;
			if ( i-1 >= 0 )
				u_s=space[i-1][j];
			if ( j-1>=0 )
				l_s=space[i][j-1];
			int bigger=(u_s>l_s)?u_s:l_s;
			if ( (l_s == -1) && (u_s == -1) ) {}
			else
				space[i][j]=space[i][j]+bigger;
		}
	}
	printf("%d\n",space[N-1][M-1]);

	return 0;
}
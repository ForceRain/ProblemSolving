#include <stdio.h>

#include <iostream>

#define INIT_VAL 0x10000000

int hist[501][501];

using namespace std;

int main(void)
{
	int N,M;
	for (int i=0;i<501;i++)	for (int j=0;j<501;j++)	hist[i][j] = INIT_VAL;
	scanf("%d%d",&N,&M);

	for ( int i=0;i<M;i++ )
	{
		int a,b;
		scanf("%d%d",&a,&b);
		hist[a][b] = 1;	
	}

	for ( int k=1;k<=N;k++ )
	{
		for ( int i=1;i<=N;i++ )
		{
			for ( int j=1;j<=N;j++ )
			{
				if ( ( i != j ) && (hist[i][j] > hist[i][k] + hist[k][j]) )
					hist[i][j] = hist[i][k] + hist[k][j];
			}
		}
	}

	for ( int i=1;i<=N;i++ )
	{
		for ( int j=1;j<=N;j++ )
			cout<<hist[i][j]<<" ";
		cout<<endl;
	}

	int Q,pre,post;
	scanf("%d",&Q);

	for ( int i=0;i<Q;i++ )
	{
		scanf("%d%d",&pre,&post);
		if ( hist[pre][post] != INIT_VAL )
			printf("-1\n");
		else if ( hist[post][pre] != INIT_VAL )
			printf("1\n");
		else
			printf("0\n");
	}

	return 0;
}
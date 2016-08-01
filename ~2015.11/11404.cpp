#include <iostream>
#include <cstdio>

using namespace std;

int space[101][101];

int main(void)
{
	int N,M;
	scanf("%d",&N);
	scanf("%d",&M);
	int a,b,c;
	for (int i=0;i<101;i++)	for (int j=0;j<101;j++)	space[i][j]=100100;
	for (int i=0;i<=N;i++)	space[i][i]=0;

	for (int i=0;i<M;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if (c<space[a][b])
			space[a][b]=c;
	}

	for (int k=1;k<=N;k++)
	{
		for (int j=1;j<=N;j++)
		{
			for (int i=1;i<=N;i++)
			{
				if (space[i][j]>space[i][k]+space[k][j])
					space[i][j]=space[i][k]+space[k][j];
			}
		}
	}

	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=N;j++)
			printf("%d ",space[i][j]);
		printf("\n");
	}

	return 0;
}
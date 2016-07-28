#include <stdio.h>
int main(void)
{
	int N,M;
	scanf("%d %d",&N,&M);
	int arr[N][M];
	int i,j,temp;
	for (i=0;i<N;i++)
	{
		for (j=0;j<M;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for (i=0;i<N;i++)
	{
		for (j=0;j<M;j++)
		{
			scanf("%d",&temp);
			arr[i][j]+=temp;
		}
	}
	for (i=0;i<N;i++)
	{
		for (j=0;j<M;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

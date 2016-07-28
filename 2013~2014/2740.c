#include <stdio.h>
int main(void)
{
	int N1,M1;
	scanf("%d %d",&N1,&M1);
	int arr1[N1][M1];
	int i,j,k,sum=0;
	for (i=0;i<N1;i++)
	{
		for (j=0;j<M1;j++)
			scanf("%d",&arr1[i][j]);
	}
	int N2,M2;
	scanf("%d %d",&N2,&M2);
	int arr2[N2][M2];
	for (i=0;i<N2;i++)
	{
		for (j=0;j<M2;j++)
			scanf("%d",&arr2[i][j]);
	}
	int ans[N1][M2];
	for (i=0;i<N1;i++)
	{
		for (j=0;j<M2;j++)
		{
			sum=0;
			for (k=0;k<N2;k++)
			{
				sum+=arr1[i][k]*arr2[k][j];  
			}
			ans[i][j]=sum;
		}
	}
	for (i=0;i<N1;i++)
	{
		for (j=0;j<M2;j++)
			printf("%d ",ans[i][j]);
		printf("\n");
	}
	return 0;
}

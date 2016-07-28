#include <stdio.h>
int main(void)
{
	int N,i;
	scanf("%d %d",&N,&i);
	int j,k;
	int arr[N][N];
	for (j=0;j<N;j++)
	{
		scanf("[^','\n]",&arr[0][j]);
	}
	for (j=1;j<N-i;j++)
	{
		for (k=0;k<N-j;k++)
		{
			arr[j][k]=arr[j-1][k+1]-arr[j-1][k];
		}
	}
	for (k=0;k<N-i;k++)
		printf("%d,",arr[i][k]);
	return 0;
}

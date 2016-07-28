#include <stdio.h>
int main(void)
{
	int N,M;
	scanf("%d %d",&N,&M);
	int arr[N][M];
	int i,j,zero=1,one=0,time=0,last;
	for (i=0;i<N;i++)
	{
		for (j=0;j<M;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	while(1)
	{
		one=0;
		for (i=0;i<N;i++)
		{
			for (j=0;j<M;j++)
			{
				if (arr[i][j]==1)
					one++;
			}
		}
		if (one==0)
			break;
		for (i=1;i<N-1;i++)
		{
			for (j=1;j<M-1;j++)
			{
				if (arr[i][j-1]+arr[i][j+1]+arr[i-1][j]+arr[i+1][j]!=4)
					arr[i][j]=0;
			}
		}
		last=one;
		time++;
	}
	printf("%d\n%d",time,last);
	return 0;
}

#include <stdio.h>
void j_box(int M)
{
	int i,j;
	for (i=0;i<M;i++)
	{
		if (i==0 || i==M-1)
		{
			for (j=0;j<M;j++)
				printf("#");
			printf("\n");
		}
		else
		{
			for (j=0;j<M;j++)
			{
				if (j==0 || j==M-1)
					printf("#");
				else
					printf("J");                
			}
			printf("\n");
		}
	}
}
int main(void)
{
	int N,M;
	scanf("%d",&N);
	int i,j;
	int arr[N];
	for (i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<N;i++)
	{
		j_box(arr[i]);
		printf("\n");
	}
	return 0;
}

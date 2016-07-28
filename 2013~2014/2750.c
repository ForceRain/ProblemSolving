#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int arr[N];
	int i,j,tmp;
	for (i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<N-1;i++)
	{
		for (j=N-1;j>i;j--)
		{
			if (arr[j-1]>arr[j])
			{
				tmp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	for (i=0;i<N;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

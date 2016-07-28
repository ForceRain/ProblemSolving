#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int i,j,tmp,max=0,min;
	int arr[N];
	for (i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<N-1;i++)
	{
		for (j=N-1;j>i;j--)
		{
			if (arr[j-1]<arr[j])
			{
				tmp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	for (i=0;i<N;i++)
	{
		if (max<arr[i]+i+1)
			max=arr[i]+i+1;
	}
	min=max;
	for (i=0;i<N;i++)
	{
		if (min>arr[i]+i+1)
			min=arr[i]+i+1;
	}
	printf("%d",max);
	return 0;
}

#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int arr[N];
	int i,up=1,max=0;
	for (i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<N-1;i++)
	{
		if (arr[i]<=arr[i+1])
		{
			up++;
		}
		else
			up=1;
		if (max<up)
			max=up;
	}
	printf("%d",max);
	return 0;
}

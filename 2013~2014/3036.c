#include <stdio.h>
int main(void)
{
	int N,min,max;
	scanf("%d",&N);
	int i;
	int arr[N];
	for (i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=1;i<N;i++)
	{
		min=1;
		max=0;
		while (min<=arr[0] || min<=arr[i])
		{
			if (arr[0]%min==0 && arr[i]%min==0)
				max=min;
			min++;
		}
		printf("%d/%d\n",arr[0]/max,arr[i]/max);
	}
	return 0;
}

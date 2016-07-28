#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int arr[N];
	int i,j,plus=0,sum=0;
	for (i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<N;i++)
	{
		if (i==0 && arr[i]==1)
		{
			plus++;
			sum+=plus;
			continue;
		}
		if (arr[i]==0)
		{
			plus=0;
		}
		else if (arr[i]==1)
		{
			plus++;
			sum+=plus;
		}
	}
	printf("%d",sum);
	return 0;
}

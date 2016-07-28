#include <stdio.h>
int main(void)
{
	int arr[100000]={0};
	int N;
	scanf("%d",&N);
	int i,tmp;
	for (i=0;i<N;i++)
	{
		scanf("%d",&tmp);
		arr[tmp]++;
	}
	scanf("%d",&N);
	int arr1[N];
	for (i=0;i<N;i++)
	{
		scanf("%d",&tmp);
		if (arr[tmp]==1)
			arr1[i]=1;
		else
			arr1[i]=0;
	}
	for (i=0;i<N;i++)
		printf("%d\n",arr1[i]);
	return 0;
}

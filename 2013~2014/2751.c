#include <stdio.h>
#include <stdlib.h>
int cmp(void *a,void *b)
{
	if (*(int *)a > *(int *)b)
		return 1;
	else if (*(int *)a < *(int *)b)
		return -1;
	else
		return 0;
}
int main(void)
{
	int N;
	scanf("%d",&N);
	int arr[N];
	int i;
	for (i=0;i<N;i++)
		scanf("%d",&arr[i]);
	qsort(arr,N,sizeof(int),cmp);
	for (i=0;i<N;i++)
		printf("%d\n",arr[i]);
	return 0;
}

#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int arr[N];
	int k,i,j,tmp;
	for (i=0;i<N;i++)
		arr[i]=i+1;
	for (i=0;i<N;i++)
	{
		if (arr[0]!=0)
		{
			printf("%d ",arr[0]);
			tmp=arr[1];
			for (j=2;j<N;j++)
				arr[j-2]=arr[j];
			arr[j-1]=0;
			arr[j]=tmp;
		}
		printf(":::");
		for (k=0;k<N;k++)
		printf("%d ",arr[k]);
		printf("\n");
	}
	return 0;
}

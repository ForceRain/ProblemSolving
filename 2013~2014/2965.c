#include <stdio.h>
int main(void)
{
	int arr[3]={0};
	scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
	int i,j,tmp;
	for (i=0;i<3-1;i++)
	{
		for (j=3-1;j>i;j--)
		{
			if (arr[j-1]>arr[j])
			{
				tmp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	if (arr[1]-arr[0]>arr[2]-arr[1])
		printf("%d",arr[1]-arr[0]-1);
	else
		printf("%d",arr[2]-arr[1]-1);
	return 0;
}

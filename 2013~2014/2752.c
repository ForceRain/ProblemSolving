#include <stdio.h>
int main(void)
{
	int tmp,j,i;
	int arr[3];
	scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
	for (i=0;i<3-1;i++)
	{
		for (j=3-1;j>i;j--)
		{
			if (arr[j-1]>arr[j])
			{
				tmp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=tmp;
			}
		}
	}
	for (i=0;i<3;i++)
		printf("%d ",arr[i]);
	return 0;
}

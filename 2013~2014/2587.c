#include <stdio.h>
int main(void)
{
	int i,j,sum=0,temp;
	int arr[5];
	for (i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	for (i=0;i<5-1;i++)
	{
		for (j=5-1;j>i;j--)
		{
			if (arr[j-1]>arr[j])
			{
				temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("%d\n%d",sum/5,arr[2]);
}

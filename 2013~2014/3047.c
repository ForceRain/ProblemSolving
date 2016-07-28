#include <stdio.h>
#define A 0
#define B 1
#define C 2
int main(void)
{
	int arr[3];
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
	char f[4];
	scanf("%s",f);
	printf("%d %d %d",arr[f[0]-65],arr[f[1]-65],arr[f[2]-65]);
	return 0;
}

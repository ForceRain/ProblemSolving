#include <stdio.h>
int main(void)
{
	int arr[6]={0};
	int i,tmp,sum=0,max;
	for (i=0;i<3;i++)
	{
		scanf("%d",&tmp);
		arr[tmp-1]++;
	}
	for (i=0;i<6;i++)
	{
		if (arr[i]==3)
			sum=10000+(i+1)*1000;
		if (arr[i]==2)
			sum=1000+(i+1)*100;
	}
	if (sum==0)
	{
		for (i=5;i>0;i--)
		{
			if (arr[i]!=0)
			{
				max=i+1;
				break;
			}
		}
		sum=max*100;
	}
	printf("%d",sum);
	return 0;
}

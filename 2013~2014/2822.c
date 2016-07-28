#include <stdio.h>
struct pro{
	int num;
	int point;
};
int main(void)
{
	struct pro stu[8];
	struct pro temp;
	int i,j,sum=0,tmp;
	int arr[5];
	for (i=0;i<8;i++)
	{
		stu[i].num=i+1;
		scanf("%d",&(stu[i].point));
	}
	for (i=0;i<8-1;i++)
	{
		for (j=8-1;j>i;j--)
		{
			if (stu[j-1].point>stu[j].point)
			{
				temp=stu[j-1];
				stu[j-1]=stu[j];
				stu[j]=temp;
			}
		}
	}
	for (i=3;i<8;i++)
	{
		sum+=stu[i].point;
		arr[i-3]=stu[i].num;
	}
	for (i=0;i<5-1;i++)
	{
		for (j=5-1;j>i;j--)
		{
			if (arr[j-1]>arr[j])
			{
				tmp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	printf("%d\n",sum);
	for (i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

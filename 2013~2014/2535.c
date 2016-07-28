#include <stdio.h>
struct student
{
	int class;
	int num;
	int point;
};

int main(void)
{
	int N;
	scanf("%d",&N);
	int check[3]={0};
	struct student stu[N];
	struct student tmp;
	int i,j,print_cnt=0;
	for (i=0;i<N;i++)
	{
		scanf("%d %d %d",&stu[i].class,&stu[i].num,&stu[i].point);
	}
	for (i=0;i<N-1;i++)
	{
		for (j=N-1;j>i;j--)
		{
			if (stu[j-1].point<stu[j].point)
			{
				tmp=stu[j-1];
				stu[j-1]=stu[j];
				stu[j]=tmp;
			}
		}
	}
	for (i=0;i<N;i++)
	{
		check[stu[i].class-1]++;
		if (check[stu[i].class-1]!=3)
		{
			printf("%d %d\n",stu[i].class,stu[i].num);
			print_cnt++;
		}
		if (print_cnt==3)
			break;
	}
	return 0;
}

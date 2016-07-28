#include <stdio.h>
struct stu{
	char name[15];
	int day;
	int month;
	int year;
	int hap;
};
int main(void)
{
	int N;
	scanf("%d",&N);
	struct stu student[N];
	struct stu temp;
	int i,j;
	for (i=0;i<N;i++)
	{
		scanf("%s %d %d %d",student[i].name,&student[i].day,&student[i].month,&student[i].year);
		student[i].hap=0;
		student[i].hap=student[i].day+student[i].month*31+student[i].year*365;
	}
	for (i=0;i<N-1;i++)
	{
		for (j=N-1;j>i;j--)
		{
			if (student[j-1].hap>student[j].hap)
			{
				temp=student[j-1];
				student[j-1]=student[j];
				student[j]=temp;
			}
		}
	}
	printf("%s\n%s",student[N-1].name,student[0].name);
	return 0;
}

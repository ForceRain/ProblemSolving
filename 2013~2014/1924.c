#include <stdio.h>
int main(void)
{
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i,x,y;
	scanf("%d %d",&x,&y);
	char *day[7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
	int sum=0;
	for (i=0;i<x-1;i++)
	{
		sum+=month[i];
	}
	sum+=y;
	sum%=7;
	printf("%s",day[sum]);
	return 0;
}

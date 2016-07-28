#include <stdio.h>
int main(void)
{
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	char *day[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
	int m,d,sum=0,i;
	scanf("%d %d",&d,&m);
	for (i=0;i<m-1;i++)
		sum+=month[i];
	sum+=d;
	sum%=7;
	printf("%s",day[sum]);
	return 0;
}

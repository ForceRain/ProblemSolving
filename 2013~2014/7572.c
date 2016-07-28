#include <stdio.h>
int main(void)
{
	int year;
	int name[12]={'I','J','K','L','A','B','C','D','E','F','G','H'};
	int num[10]={6,7,8,9,0,1,2,3,4,5};
	scanf("%d",&year);
	printf("%c%d",name[year%12],num[year%10]);
	return 0;
}

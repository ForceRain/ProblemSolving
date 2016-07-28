#include <stdio.h>
int main(void)
{
	int day,a,b,c,d,max1,max2,max;
	scanf("%d",&day);
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	max1=a/c;
	if (a%c!=0)
		max1++;
	max2=b/d;
	if (b%d!=0)
		max2++;
	if (max2>max1)
		max=max2;
	else
		max=max1;
	printf("%d",day-max);
	return 0; 
}

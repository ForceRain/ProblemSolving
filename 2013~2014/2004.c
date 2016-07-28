#include <stdio.h>
int main(void)
{
	int a,b,two=0,five=0,count=0;
	scanf("%d %d",&a,&b);
	int i,j=a;
	for (i=0;i<b;i++,j--)
	{
		if (j%2==0)
			two++;
		if (j%5==0)
			five++;
	}
	j=b;
	for (i=0;i<b;i++,j--)
	{
		if (j%2==0)
			two--;
		if (j%5==0)
			five--;
	}
	while(two!=0 || five!=0)
	{
		count++;
		two--;
		five--;
	}
	printf("%d",count);
	return 0;
}

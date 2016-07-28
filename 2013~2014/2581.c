#include <stdio.h>
int main(void)
{
	int from,to,min,escape=0,sum=0;
	scanf("%d %d",&from,&to);
	int i=from,j;
	for (;i<=to;i++)
	{
		escape=0;
		for (j=1;j<=i;j++)
		{
			if ((i%j)==0)
			{
				escape++;
			}
			if (escape>2)
			{
				escape=0;
				break;
			}
		}
		if (escape==2)
		{
			if (min==0)
				min=i;
			sum+=i;
		}
	}
	if (sum==0)
		printf("-1");
	else
		printf("%d\n%d",sum,min);
	return 0;
}

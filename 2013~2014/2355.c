#include <stdio.h>
int sigma(int a,int b)
{
	if (a+b<0)
	{
		if (a*b<0)
		{
			if (a>b)
				return (a*(a+1)/2)-((-b)*(-b-1)/2);
			else
				return (b*(b+1)/2)-((-a)*(-a-1)/2);
		}
		else
		{
			if (a>b)
				return ((-a)*(-a+1)/2)-((-b)*(-b-1)/2);
			else
				return ((-b)*(-b+1)/2)-((-a)*(-a-1)/2);
		}
	}
	else if (a+b>0)
	{
		if (a*b<0)
		{
			if (a>b)
				return (a*(a+1)/2)-((-b)*(-b-1)/2);
			else
				return (b*(b+1)/2)-((-a)*(-a-1)/2);
		}
		else
		{
			if (a>b)
				return (a*(a+1)/2)-(b*(b-1)/2);
			else
				return (b*(b+1)/2)-(a*(a-1)/2);
		}
	}
	else
		return 0;
}
int main(void)
{
	int i,j;
	scanf("%d %d",&i,&j);
	printf("%d",sigma(i,j));
	return 0;
}

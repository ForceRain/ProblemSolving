#include <stdio.h>
int main(void)
{
	int h,m;
	scanf("%d %d",&h,&m);
	if (m-45<0)
	{
		h--;
		m+=60;
		m-=45;
	}
	else
	{
		m-=45;
	}
	if (h<0)
	{
		h+=24;
	}
	printf("%d %d",h,m);
	return 0;
}

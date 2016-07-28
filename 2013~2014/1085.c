#include <stdio.h>
int main(void)
{
	int x,y,w,h;
	int min_x,min_y;
	scanf("%d %d %d %d",&x,&y,&w,&h);
	min_x=x;
	min_y=y;
	if (x>w-x)
		min_x=w-x;
	if (y>h-y)
		min_y=h-y;
	if (min_x<min_y)
		printf("%d",min_x);
	else if (min_y<min_x)
		printf("%d",min_y);
	else if (min_y==min_x)
		printf("%d",min_x);
	return 0;
}

#include <stdio.h>
int main(void)
{
	int R,B;
	int i=0,j;
	int x,y;
	scanf("%d %d",&R,&B);
	for (j=1;j<=B;j++)
	{
		x=B/j;
		y=j;
		if (((x+2)*(y+2)-B)==R)
			break;
	}
	if ((x+2)<(y+2))
		printf("%d %d",y+2,x+2);
	else
		printf("%d %d",x+2,y+2);
	return 0;
}

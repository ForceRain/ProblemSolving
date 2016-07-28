#include <stdio.h>
int main(void)
{
	int up,down,length,day=1;
	scanf("%d %d %d",&up,&down,&length);
	day+=((length-up)+1)/down;
	printf("%d",day);
	return 0;
}

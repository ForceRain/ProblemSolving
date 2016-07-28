#include <stdio.h>
int main(void)
{
	int N,P,gap,init,count=0;
	scanf("%d %d",&N,&P);
	gap=(N*N)%P;
	init=gap;
	while(1)
	{
		count++;
		gap=(gap*N)%P;
		if (gap==init)
			break;
	}
	printf("%d",count);
	return 0;
}

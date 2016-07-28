#include <stdio.h>
int main(void)
{
	int price,zero;
	scanf("%d %d",&price,&zero);
	int ten=1,gap;
	while(zero)
	{
		ten*=10;
		zero--;
	}
	if (price%ten)
	{
		if ((price%ten)/(ten/10)>4)
			gap=((price/ten)+1)*ten;
		else
			gap=((price/ten))*ten;
	}
	else
		gap=price;
	printf("%d",gap);
	return 0;
}

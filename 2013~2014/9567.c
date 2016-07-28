#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int turn=1;
	while (1)
	{
		if (N>=4)
			N-=4;
		else if (N>=3)
			N-=3;
		else if (N>=1)
			N-=1;
		if (N==0)
			break;
		turn++;
	}
	if (turn%2==1)
		printf("SK");
	else
		printf("CY");
	return 0;
}

#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int i,j;
	for (i=0;i<N;i++)
	{
		for (j=0;j<i;j++)
			printf(" ");
		for (j=0;j<2*(N-i)-1;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

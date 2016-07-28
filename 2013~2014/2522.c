#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int i,j;
	for (i=0;i<N;i++)
	{
		for (j=1;j<N-i;j++)
			printf(" ");
		for (j=0;j<=i;j++)
			printf("*");
		printf("\n");
	}
	for (i=0;i<N-1;i++)
	{
		for (j=0;j<=i;j++)
			printf(" ");
		for (j=0;j<(N-1)-i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

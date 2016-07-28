#include <stdio.h>

int main(void)
{
	int i,N;

	scanf("%d",&N);

	int sum=0;

	for (i=1;i<=N-3;i++)
	{
		sum+=i*(N-i-2);
	}

	printf("%d\n",(sum*N)/4);

	return 0;
}

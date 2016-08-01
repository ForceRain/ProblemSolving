#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int N;
	scanf("%d",&N);

	if (N==1)
	{
		printf("*\n");
		return 0;
	}

	for (int i=0;i<N;i++)
	{
		for (int j=N-i;j>1;j--)
			printf(" ");

		if (i!=0)
			printf("*");

		if (i==N-1)
		{
			for (int j=0;j<2*i;j++)
				printf("*");
			printf("\n");
		}
		else
		{
			for (int j=0;j<2*i-1;j++)
				printf(" ");
			printf("*\n");
		}
	}

	return 0;
}
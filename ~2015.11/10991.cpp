#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int N;
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		for (int j=N-i;j>1;j--)
			printf(" ");

		int t=2*i+1;
		for (int j=0;j<t;j++)
			if (j%2==0)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}

	return 0;
}
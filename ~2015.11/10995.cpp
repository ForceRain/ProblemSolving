#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int N;
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		for (int j=0;j<2*N;j++)
		{
			if ((i+j)%2==0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
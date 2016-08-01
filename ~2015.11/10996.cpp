#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int N;
	scanf("%d",&N);

	int h=((N==1)?1:2*N);

	for (int i=0;i<h;i++)
	{
		for (int j=0;j<N;j++)
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
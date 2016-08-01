#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int space[10];

int main(void)
{
	int N;
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		space[i]=i+1;
		printf("%d ",space[i]);
	}
	printf("\n");
	while (next_permutation(space,space+N))
	{
		for (int i=0;i<N;i++)
			printf("%d ",space[i]);
		printf("\n");
	}

	return 0;
}
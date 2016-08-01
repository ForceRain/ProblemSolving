#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int space[10001];

int main(void)
{
	int N;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
		scanf("%d",&space[i]);

	if (next_permutation(space,space+N))
	{
		for (int i=0;i<N;i++)
			printf("%d ",space[i]);
		printf("\n");
	}
	else
		printf("-1\n");

	return 0;
}
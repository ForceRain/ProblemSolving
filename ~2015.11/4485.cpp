#include <iostream>
#include <cstdio>

using namespace std;

int space[126][126];

int main(void)
{
	int N;
	while (true)
	{
		scanf("%d",&N);
		if (N==0)
			break;
		for (int i=0;i<N;i++)	for (int j=0;j<N;j++)	scanf("%d",&space[i][j]);
						

	}
	return 0;
}
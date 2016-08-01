#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int T,N,C;
	scanf("%d",&T);

	for (int i=0;i<T;i++)
	{
		scanf("%d%d",&N,&C);
		if ( (N%C) != 0)
			printf("%d\n",N/C+1);
		else
			printf("%d\n",N/C);
	}

	return 0;
}
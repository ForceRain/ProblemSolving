#include <iostream>
#include <cstdio>

using namespace std;

int space[10001];

int main(void)
{
	int N,inp;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
		scanf("%d",&inp);
		space[inp]++;
	}

	for (int i=0;i<10001;i++)
	{
		if (space[i]!=0)
		{
			for (int j=0;j<space[i];j++)
				printf("%d\n",i);
		}
	}

	return 0;
}
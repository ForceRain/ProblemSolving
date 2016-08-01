#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

priority_queue <int> container;

int main(void)
{
	int N,val;
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		scanf("%d",&val);
		if (val==0)
		{
			if (container.empty())
				printf("0\n");
			else
			{
				printf("%d\n",container.top());
				container.pop();
			}
		}
		else
			container.push(val);
	}

	return 0;
}
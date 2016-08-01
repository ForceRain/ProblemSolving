#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

vector < pair<int,int> > container;

int main(void)
{
	int N,counting=0;
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		int pos,speed;
		scanf("%d%d",&pos,&speed);
		container.push_back(pair<int,int>(pos,speed));
	}

	int min_speed=0x7FFFFFFF;
	int sz=container.size();
	for (int i=sz-1;i>=0;i--)
	{
		if (min_speed>=container[i].second)
		{
			if (min_speed==container[i].second)
				counting++;
			min_speed=container[i].second;
			counting++;
		}
	}
	printf("%d\n",counting);

	return 0;
}
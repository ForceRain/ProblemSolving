#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <functional>

using namespace std;

int main(void)
{
	int test;
	scanf("%d",&test);
	for (int i=0;i<test;i++)
	{
		int N,num;
		unsigned long long summation=0;
		scanf("%d",&N);
		vector <int> container;
		for (int j=0;j<N;j++)
		{
			scanf("%d",&num);
			container.push_back(num);
		}
		sort(container.begin(),container.end(),greater<int>());
		int ptr=2;
		int siz=container.size();
		while (ptr<siz)
		{
			summation+=container[ptr];
			ptr+=3;
		}
		printf("%d\n",summation);
	}

	return 0;
}
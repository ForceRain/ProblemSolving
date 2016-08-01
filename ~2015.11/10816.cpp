#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

map< int,int > container;

int main(void)
{
	int N,M,num;
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		scanf("%d",&num);
		map<int,int>::iterator it=container.find(num);
		if (it!=container.end())
			(*it).second++;
		else
			container.insert(pair<int,int>(num,1));
	}
	scanf("%d",&M);
	for (int i=0;i<M;i++)
	{
		scanf("%d",&num);
		map<int,int>::iterator it=container.find(num);
		if (it!=container.end())
			printf("%d ",(*it).second);
		else
			printf("0 ");
	}
	printf("\n");

	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

vector <int> container;

int main(void)
{
	int N,new_one,P,tmp;
	scanf("%d%d%d",&N,&new_one,&P);

	for (int i=0;i<N;i++)
	{
		scanf("%d",&tmp);
		container.push_back(tmp);
	}
	if (N>=P)
	{
		int pos=upper_bound(container.rbegin(),container.rend(),new_one)-container.rbegin();
		vector <int> :: reverse_iterator ip=container.rend()-P;
	//	printf("pos : %d\n",N-pos);
	//	printf("%d\n",(*ip));
		if (new_one<=(*ip))
			printf("-1\n");
		else
			printf("%d\n",(N-pos)+1);
	}
	else
	{
		int pos=upper_bound(container.rbegin(),container.rend(),new_one)-container.rbegin();
		printf("%d\n",(N-pos)+1);
	}

	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int space[15];

int main(void)
{
	int N,K;
	scanf("%d%d",&N,&K);

	for (int i=0;i<N;i++)
		scanf("%d",&space[i]);

	int pos=lower_bound(space,space+N,K)-space;
	pos=(pos<N)?pos:N-1;
	
	int c_num=0;
	while (K>0)
	{
		c_num+=K/space[pos];
		K=K%space[pos--];
	}
	printf("%d\n",c_num);

	return 0;
}
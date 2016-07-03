#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef struct _node
{
	int first;
	int second;
	int position;
}Node;

Node stat[50001];

bool myCompare1( Node a, Node b )
{
	if ( a.first > b.first )
		return true;
	else
		return false;
}

bool myCompare2( Node a, Node b )
{
	if ( a.second > b.second )
		return true;
	else
		return false;
}

int main(void)
{
	int N,K;
	freopen("test.txt","r",stdin);
	scanf("%d%d",&N,&K);

	for (int i=0;i<N;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		stat[i].first = a; stat[i].second = b; stat[i].position = i+1;
	}

	sort(stat,stat+N,myCompare1);
	sort(stat,stat+K,myCompare2);

	printf("%d\n",stat[0].position);

	return 0;
}
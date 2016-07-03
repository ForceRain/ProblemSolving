#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct _node{
	int order;
	int in_val;
	int sort_val;
	_node ( int a,int b,int c ) : order(a), in_val(b), sort_val(c)	{}
}Node;

vector < Node > container;

bool my_compare1( Node a, Node b )
{
	if ( a.in_val < b.in_val )
		return true;
	else if ( a.in_val > b.in_val )
		return false;
	else
		return a.order < b.order;
}

bool my_compare2( Node a, Node b )
{
	if ( a.order < b.order )
		return true;
	else return false;
}

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
	{
		int val;
		scanf("%d",&val);
		container.push_back(Node(i,val,0));
	}
	sort(container.begin(),container.end(),my_compare1);

	for ( int i=0;i<N;i++ )
		container[i].sort_val=i;
	
	sort(container.begin(),container.end(),my_compare2);

	for (int i=0;i<N;i++)
		printf("%d ",container[i].sort_val);
	printf("\n");

	return 0;
}
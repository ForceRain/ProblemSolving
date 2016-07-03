#include <iostream>
#include <cstdio>

using namespace std;

typedef struct _node
{
	int value;
	struct _node *parent;
}Node;

Node pools[1000010];

Node * get_parent( int val )
{
	Node *tmp = pools[val].parent;
	while ( tmp -> parent != tmp )
		tmp = tmp ->parent;
	return tmp;
}

void merge( int a, int b )
{
	Node *tmp = get_parent(a);
	Node *tmp1 = get_parent(b);
	tmp1->parent = tmp;
}

int main(void)
{
	int N,M;
	freopen("test.txt","r",stdin);
	scanf("%d%d",&N,&M);
	for ( int i=0;i<=N;i++ )	pools[i].parent = &pools[i];
	
	for ( int i=0;i<M;i++ )
	{
		int op,a,b;
		scanf("%d%d%d",&op,&a,&b);
		if ( op == 1 )
		{
			if (get_parent(a) == get_parent(b))
				printf("YES\n");
			else
				printf("NO\n");
		}
		else
			merge(a,b);
	}

	return 0;
}
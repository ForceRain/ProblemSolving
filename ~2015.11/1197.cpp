#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef struct _node
{
	int height;
	struct _node *parent;
}Node;

Node container[10001];
pair<int, pair<int,int> > edge_container[100000];

void Init(int num)
{
	for (int i=1;i<=num;i++)
	{
		container[i].parent=&container[i];
		container[i].height=1;
	}
}

bool Check(int p,int q)
{
	Node *x=&container[p];
	while (x!=x->parent)
		x=x->parent;
	Node *y=&container[q];
	while (y!=y->parent)
		y=y->parent;

	return (x!=y);
}

void Merge(int p,int q)
{
	if (container[p].height>=container[q].height)
	{
		if (container[p].height==container[q].height)
			container[p].height++;
		container[q].parent=&container[p];
	}
	else
	{
		container[p].parent=&container[q];
	}
}

int main(void)
{
	int V,E;
	int a,b,weight;
	int counter=0,e_ptr=0;
	long long total_wht=0;
	scanf("%d%d",&V,&E);
	Init(V);
	for (int i=0;i<E;i++)
	{
		scanf("%d%d%d",&a,&b,&weight);
		edge_container[i]=pair<int, pair<int,int> >((weight+1000000),pair<int,int>(a,b));
	}

	sort(edge_container,edge_container+E);

	while (counter!=(V-1))
	{
		pair<int, pair<int,int> > tmp=edge_container[e_ptr];
	//	cout<<"Edge : "<<tmp.second.first<<", "<<tmp.second.second<<" || weight : "<<tmp.first<<endl;
		int a=tmp.second.first;
		int b=tmp.second.second;
		if (Check(a,b))
		{
			Merge(a,b);
			total_wht+=(tmp.first-1000000);
	//		cout<<"t_weight : "<<total_wht<<endl;
			counter++;
		}
		e_ptr++;
	}

	cout<<total_wht<<endl;

	return 0;
}
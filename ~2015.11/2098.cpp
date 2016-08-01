#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

typedef struct _node
{
	int sum_weight;
	int level;
	int last_visit;
	bool visited[16];
	_node (int sw,int l,int l_v) : sum_weight(sw), level(l),last_visit(l_v) {}
}Node;

int W[17][17];
queue < Node > container;

int main(void)
{
	int N,we;
	cin>>N;
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=N;j++)
		{
			scanf("%d",&we);
			W[i][j]=we;
		}
	}
	int tsp_min=0x7FFFFFFF;
	Node t(0,0,1);
	t.visited[1]=true;
	container.push(t);
	while (!container.empty())
	{
		Node tmp=container.front();
		container.pop();
		if (tmp.level==N)
		{
			bool check=true;
			for (int i=1;i<=N;i++)
			{
				if (!tmp.visited[i])
				{
					check=false;
					break;
				}
			}
			if (check)
			{
				int val=tmp.sum_weight+W[tmp.last_visit][1];
				if (val<tsp_min)
					tsp_min=val;
			}
		}
		else
		{
			for (int i=1;i<=N;i++)
			{
				if (W[tmp.last_visit][i]!=0 && (!tmp.visited[i]))
				{
					Node tt(tmp.sum_weight+W[tmp.last_visit][i],tmp.level+1,i);
					memcpy(tt.visited,tmp.visited,sizeof(tt.visited));
					tt.visited[i]=true;
					container.push(tt);
				}
			}
		}
	}
	cout<<tsp_min<<endl;

	return 0;
}
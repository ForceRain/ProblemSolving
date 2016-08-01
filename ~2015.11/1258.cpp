#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

typedef struct _node
{
	int level;
	int value;
	bool visited[101];
	_node (int l,int v,bool *vis) : level(l), value(v)
	{
		for (int i=0;i<101;i++)
			visited[i]=vis[i];
	}
	void set_visited(int pos)
	{
		visited[pos]=true;
	}
}Node;

int space[101][101];
queue < Node > container;

int main(void)
{
	int N;
	scanf("%d",&N);

	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=N;j++)
			scanf("%d",&space[i][j]);
	}

	int mini_time=0x7FFFFFFF;
	for (int j=1;j<=N;j++)
	{
		bool visi[101]={false};
		visi[j]=true;
		Node start(2,space[1][j],visi);
		container.push(start);
		while (!container.empty())
		{
			Node tmp=container.front();
			container.pop();
			if (tmp.level==(N+1))
			{
				if (mini_time>tmp.value)
					mini_time=tmp.value;
			}
			else
			{
				for (int i=1;i<=N;i++)
				{
					if (!tmp.visited[i] && ((tmp.value+space[tmp.level][i])<mini_time))
					{
						Node new_one(tmp.level+1,tmp.value+space[tmp.level][i],tmp.visited);
						new_one.set_visited(i);
						container.push(new_one);
					}
				}
			}
		}
	}

	printf("%d\n",mini_time);

	return 0;
}
#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int W[1000][1000];
bool DFS_visit[1000];
bool BFS_visit[1000];
int src;
int node_num;

bool BFS_available(int src)
{
	for (int i=0;i<node_num;i++)
	{
		if ((W[i][src]!=0) || (W[src][i]!=0))
		{
			if (!BFS_visit[i])
				return true;
		}
	}
	return false;
}

bool DFS_available(int src)
{
	for (int i=0;i<node_num;i++)
	{
		if ((W[i][src]!=0) || (W[src][i]!=0))
		{
			if (!DFS_visit[i])
				return true;
		}
	}
	return false;
}

void DFS()
{
	vector<int> container;
	int start=src-1;
	int visit_num=1;
	cout<<start+1<<" ";
	DFS_visit[start]=true;
	do
	{
		if (DFS_available(start))
		{
			for (int i=node_num-1;i>=0;i--)
			{
				if (((W[start][i]!=0) || (W[i][start]!=0)) && (!DFS_visit[i]))
				{
					container.push_back(i);
					//DFS_visit[i]=true;
				}
			}
		}

		visit_num++;
		start=container[container.size()-1];
		//cout<<"DFS start : "<<start<<endl;
		if (!DFS_visit[start])
		{
			DFS_visit[start]=true;
			cout<<start+1<<" ";
		}
		container.pop_back();
	}
	while ((container.size()!=0) || (DFS_available(start)));

	cout<<endl;
}

void BFS()
{
	deque<int> container;
	int start=src-1;
	int visit_num=1;
	cout<<start+1<<" ";
	BFS_visit[start]=true;
	do
	{
		if (BFS_available(start))
		{
			for (int i=0;i<node_num;i++)
			{
				if (((W[start][i]!=0) || (W[i][start]!=0)) && (!BFS_visit[i]))
				{
					container.push_back(i);
					BFS_visit[i]=true;
				}
			}
		}
		
		visit_num++;
		start=container[0];
		
		cout<<start+1<<" ";

		container.pop_front();
	}
	while ((container.size()!=0) || BFS_available(start));
	cout<<endl;	
}


int main(void)
{
	int edge_num;
	cin>>node_num>>edge_num>>src;

	int from,to;
	for (int i=0;i<edge_num;i++)
	{
		cin>>from>>to;
		W[from-1][to-1]=1;
		W[to-1][from-1]=1;
	}

	DFS();
	BFS();

	return 0;
}
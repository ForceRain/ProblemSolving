#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;

int W[1001][1001];
int vertex_time[1001];
bool visited[1001];
int vertex_num;
int my_time;
pair<int,int> container[1001];
int maximum=-1;
int destination;

bool my_compare(pair<int,int> a,pair<int,int> b)
{
	return a.first>b.first;
}

void DFS_visit(int from)
{
	my_time++;
	for (int i=1;i<=vertex_num;i++)
	{
		if ((W[from][i] != 0) && !visited[i])
		{
			visited[i]=true;
			DFS_visit(i);
		}
	}
	my_time++;
	container[from].second=from;
	container[from].first=my_time;
}

void DFS()
{
	for (int i=1;i<=vertex_num;i++)
	{
		if (!visited[i])
		{
			visited[i]=true;
			DFS_visit(i);
		}
	}
}

void pop_up()
{
	
}

int main(void)
{
	int testcase,N,K,tmp,from,to;
	cin>>testcase;

	for (int i=0;i<testcase;i++)
	{
		maximum=-1;
		my_time=0;
		memset(visited,0,sizeof(visited));
		cin>>N>>K;
		vertex_num=N;
		for (int j=0;j<N;j++)
		{
			cin>>tmp;
			vertex_time[j+1]=tmp;		//vertex time initialize.
		}
		for (int j=0;j<K;j++)
		{
			cin>>from>>to;
			W[from][to]=1;
		}
		cin>>destination;

		DFS();
		sort(container+1,container+1+vertex_num,my_compare);
		memset(visited,0,sizeof(visited));

		pop_up();
		cout<<maximum<<endl;
	}

	return 0;
}
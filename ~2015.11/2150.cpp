#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

vector<int> edge_list[10001];
vector<int> trans_edge_list[10001];
int finishing_my_t[10001];
pair<int,int> fin[10001];
int my_t=0;
bool visited[10001];
vector<int> vertex_list[10001];
int vertex_num;
int SCC_num;

bool my_greater(pair<int,int> a,pair<int,int> b)
{
	return (a.first>b.first); 
}

bool vec_small(vector<int> a,vector<int> b)
{
	return a[0]<b[0];
}

void DFS_visit(int from)
{
	my_t++;
	for (int i=0;i<edge_list[from].size();i++)
	{
		if (!visited[edge_list[from][i]])
		{
			visited[edge_list[from][i]]=true;
			DFS_visit(edge_list[from][i]);
		}
	}
	finishing_my_t[from]=my_t;
	fin[from].first=my_t;
	fin[from].second=from;
	my_t++;
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

void T_DFS_visit(int from)
{
	for (int i=0;i<trans_edge_list[from].size();i++)
	{
		if (!visited[trans_edge_list[from][i]])
		{
			visited[trans_edge_list[from][i]]=true;
			vertex_list[SCC_num].push_back(trans_edge_list[from][i]);
			T_DFS_visit(trans_edge_list[from][i]);
		}
	}
}

void T_DFS()
{
	pair<int,int> node;
	for (int i=1;i<=vertex_num;i++)
	{
		node=fin[i];
		if (!visited[node.second])
		{
			SCC_num++;
			visited[node.second]=true;
			vertex_list[SCC_num].push_back(node.second);
			T_DFS_visit(node.second);
			sort(vertex_list[SCC_num].begin(),vertex_list[SCC_num].end());
		}
	}
}

int main(void)
{
	int edge_num,from,to;
	SCC_num=0;
	cin>>vertex_num>>edge_num;

	for (int i=0;i<edge_num;i++)
	{
		cin>>from>>to;
		edge_list[from].push_back(to);
		trans_edge_list[to].push_back(from);
	}

	//1. DFS 시행
	my_t=0;
	DFS();

	//2. transpose 진행
	memset(visited,0,sizeof(visited));
	sort(fin+1,fin+vertex_num+1,my_greater); 
//	for (int i=1;i<=vertex_num;i++)
//		cout<<fin[i].first<<"::"<<fin[i].second<<endl;
	//3. 1.DFS에서 finishing my_t이 제일 큰 것부터 DFS 시행
	T_DFS();

	cout<<SCC_num<<endl;
	sort(vertex_list+1,vertex_list+1+SCC_num,vec_small);
	for (int i=1;i<=SCC_num;i++)
	{
		for (int j=0;j<vertex_list[i].size();j++)
			cout<<vertex_list[i][j]<<" ";
		cout<<-1<<endl;
	}

	return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int space[27][27];	//0,26 X
bool visited[27][27];
char input_stream[100];
int direction[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
vector <int> size_container;
int N;
int size_counter=0;

void DFS_Visit(int x,int y)
{
	size_counter++;
	for (int i=0;i<4;i++)
	{
		int n_x=x+direction[i][0];
		int n_y=y+direction[i][1];
		if (space[n_x][n_y]==1 && !visited[n_x][n_y])
		{
			visited[n_x][n_y]=true;
			DFS_Visit(n_x,n_y);
		}
	}
}

void DFS()
{
	size_counter=0;
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=N;j++)
		{
			size_counter=0;
			if (space[i][j]==1 && !visited[i][j])
			{
				visited[i][j]=true;
				DFS_Visit(i,j);
				size_container.push_back(size_counter);
			}
		}
	}
}

int main(void)
{
	cin>>N;
	for (int i=0;i<27;i++)
	{
		space[0][i]=-1;
		space[i][0]=-1;
		space[26][i]=-1;
		space[i][26]=-1;
		visited[0][i]=true;
		visited[i][0]=true;
		visited[26][i]=true;
		visited[i][26]=true;
	}
	for (int i=1;i<=N;i++)
	{
		cin>>input_stream;
		for (int j=1;j<=N;j++)
			space[i][j]=input_stream[j-1]-'0';
	}

	DFS();
	sort(size_container.begin(),size_container.end());
	int s=size_container.size();
	cout<<s<<endl;
	for (int i=0;i<s;i++)
		cout<<size_container[i]<<endl;

	return 0;
}

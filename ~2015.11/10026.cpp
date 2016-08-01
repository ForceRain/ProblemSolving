#include <iostream>
#include <cstring>
#include <vector>
#include <cstdio>

using namespace std;

char input_buffer[102];
char space[102][102];
bool visited[102][102];
vector <pair <int,int> > container;
int N;
int counter=0;
int direction[4][2]={{1,0},{-1,0},{0,-1},{0,1}};

void DFS_Visit(int x,int y,char c)
{
	for (int i=0;i<4;i++)
	{
		int x_pos=x+direction[i][0];
		int y_pos=y+direction[i][1];
//		cout<<x_pos<<", "<<y_pos<<endl;
		if ((!visited[x_pos][y_pos]) && (space[x_pos][y_pos]==c))
		{
//			cout<<"why come"<<endl;
			visited[x_pos][y_pos]=true;
			DFS_Visit(x_pos,y_pos,c);
		}
	}
}

void DFS()
{
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=N;j++)
		{
			if (!visited[i][j])
			{
				visited[i][j]=true;
				DFS_Visit(i,j,space[i][j]);
				counter++;
			}
		}
	}
}

int main(void)
{
	cin>>N;
	for (int i=0;i<102;i++)
	{
		visited[i][0]=true;
		visited[0][i]=true;
		visited[101][i]=true;
		visited[i][101]=true;
	}
	for (int i=1;i<=N;i++)
	{
		scanf("%s",input_buffer);
		for (int j=1;j<=N;j++)
		{
			if (input_buffer[j-1]=='G')
				container.push_back(pair<int,int>(i,j));
			space[i][j]=input_buffer[j-1];
		}
	}
	DFS();
	cout<<counter<<" ";
	counter=0;
	memset(visited,0,sizeof(visited));
	for (int i=0;i<102;i++)
	{
		visited[i][0]=true;
		visited[0][i]=true;
		visited[101][i]=true;
		visited[i][101]=true;
	}
	int sz=container.size();
	for (int i=0;i<sz;i++)
		space[container[i].first][container[i].second]='R';
	DFS();
	cout<<counter<<endl;

	return 0;
}
#include <iostream>

using namespace std;

int space[502][502];
bool visited[502][502];
int N;
int M;
int direction[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
int piece_cnt;
int size_cnt;
int max_size=-1;

void DFS_Visit(int x,int y)
{
	size_cnt++;
	for (int i=0;i<4;i++)
	{
		int new_x=x+direction[i][0];
		int new_y=y+direction[i][1];
		if ((space[new_x][new_y]==1) && (!visited[new_x][new_y]))
		{
			visited[new_x][new_y]=true;
			DFS_Visit(new_x,new_y);
		}
	}
}

void DFS()
{
	for (int i=1;i<=N;i++)	for (int j=1;j<=M;j++)
	{
		if ((space[i][j]==1) && (!visited[i][j]))
		{
			visited[i][j]=true;
			DFS_Visit(i,j);
			piece_cnt++;
			if (size_cnt>max_size)
				max_size=size_cnt;
			size_cnt=0;
		}
	}
}

int main(void)
{
	cin>>N>>M;
	for (int i=0;i<502;i++) 
	{
		visited[i][0]=true;
		visited[0][i]=true;
		visited[501][i]=true;
		visited[i][501]=true;
	}

	for (int i=1;i<=N;i++) for (int j=1;j<=M;j++)
		cin>>space[i][j];

	DFS();
	cout<<piece_cnt<<endl;
	if (piece_cnt==0)
		cout<<0<<endl;
	else
		cout<<max_size<<endl;


	return 0;
}
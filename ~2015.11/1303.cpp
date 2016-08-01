#include <iostream>

using namespace std;

bool visited[102][102];
char space[102][102];
char buff[102];
unsigned long long W_val;
unsigned long long B_val;
int N,M;
unsigned long long counter;
int direction[8][2]={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};

void DFS_Visit(int x,int y,char c)
{
	if (!visited[x][y])
	{
		counter++;
		visited[x][y]=true;
		for (int i=0;i<8;i++)
		{
			int mov_x=x+direction[i][0];
			int mov_y=y+direction[i][1];
			if (!visited[mov_x][mov_y] && space[mov_x][mov_y]==c)
				DFS_Visit(mov_x,mov_y,c);
		}
	}
}

void DFS()
{
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=M;j++)
		{
			if (!visited[i][j])
			{
				counter=0;
				DFS_Visit(i,j,space[i][j]);
				if (space[i][j]=='W')
					W_val+=(counter*counter);
				else
					B_val+=(counter*counter);
			}
		}
	}
}

int main(void)
{
	cin>>N>>M;

	for (int i=0;i<=101;i++)
	{
		visited[i][0]=true;
		visited[0][i]=true;
		visited[101][i]=true;
		visited[i][101]=true;
	}

	for (int i=1;i<=N;i++)
	{
		cin>>buff;
		for (int j=1;j<=M;j++)
			space[i][j]=buff[j-1];
	}
	/*
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=M;j++)
			cout<<space[i][j];
		cout<<endl;
	}*/
	DFS();

	cout<<W_val<<" "<<B_val<<endl;

	return 0;
}
#include <iostream>

using namespace std;

int W[101][101];
int visit[101];
int number=0;

void DFS(int index,int N)
{
	visit[index]++;
	number++;
	for (int i=0;i<=N;i++)
	{
		if ((W[index][i]!=0 || W[i][index]!=0) && (!visit[i]))
			DFS(i,N);
	}
	return;
}

int main(void)
{
	int N;
	cin>>N;
	int links;
	cin>>links;

	int u,v;
	for (int i=0;i<links;i++)
	{
		cin>>u>>v;
		W[u][v]++;
		W[v][u]++;
	}
	/*
	for (int i=0;i<=N;i++)
	{
		for (int j=0;j<=N;j++)
			cout<<W[i][j]<<" ";
		cout<<endl;
	}*/

	DFS(1,N);
	cout<<number-1<<endl;

	return 0;
}
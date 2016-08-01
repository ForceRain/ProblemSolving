#include <iostream>
#include <queue>

using namespace std;

int W[101][101];
bool visited[101][101];
queue <pair <int,int> >container;	// 시작 정점, 레벨.

int main(void)
{
	int e,a,b,N,src,target,counting;
	bool founded=false;
	cin>>N;
	cin>>src>>target;
	cin>>e;
	for (int i=0;i<e;i++)
	{
		cin>>a>>b;
		W[a][b]=1;
		W[b][a]=1;
	}
	
	container.push(pair<int,int>(src,0));
	while (!container.empty())
	{
		pair<int,int> tmp=container.front();
		container.pop();
		if (tmp.first==target)
		{
			founded=true;
			counting=tmp.second;
			break;
		}
		else
		{
			for (int i=1;i<=N;i++)
			{
				if ((W[tmp.first][i]==1) && (!visited[tmp.first][i]))
				{
					visited[tmp.first][i]=true;
					container.push(pair<int,int>(i,tmp.second+1));
				}
			}
		}
	}
	if (!founded)
		cout<<-1<<endl;
	else
		cout<<counting<<endl;
			
	return 0;
}

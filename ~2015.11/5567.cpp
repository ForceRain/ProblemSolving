#include <iostream>
#include <queue>

using namespace std;

int W[501][501];
bool visited[501][501];
queue <pair<int,int> > container;		// level,#
int in_guy[501];

int main(void)
{
	int N,M,from,to;
	cin>>N;
	cin>>M;

	for (int i=0;i<M;i++)
	{
		cin>>from>>to;
		W[from][to]=1;
		W[to][from]=1;
	}
	int counter=0;
	container.push(pair<int,int>(0,1));
	while (!container.empty())
	{
		pair<int,int> tmp=container.front();
		container.pop();
		if (tmp.first==2)
			break;
		else
		{
			for (int i=1;i<=N;i++)
			{
				if ((!visited[tmp.second][i]) && (W[tmp.second][i]!=0))
				{
		//			cout<<"in : "<<tmp.second<<", "<<i<<endl;
					container.push(pair<int,int>(tmp.first+1,i));
					visited[tmp.second][i]=true;
					in_guy[i]=1;
				}
			}
		}
	}
	for (int i=0;i<=N;i++)
	{
		if (in_guy[i]==1)
			counter++;
	}
	cout<<counter-1<<endl;

	return 0;
}
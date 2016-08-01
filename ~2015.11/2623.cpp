#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

enum {WHITE=0,GRAY=1,BLACK=2};

int W[1001][1001];
int visited[1001];
bool checking[1001];
int finishing_time[1001];
int timing;
int N;
bool nope;
vector <pair <int,int> > container;

void DFS_Visit(int src)
{
	timing++;
	for (int i=1;i<=N;i++)
	{
		if (W[src][i]==1)
		{
	//		cout<<src<<","<<i<<endl;
			if (visited[i]==WHITE)
			{
				visited[i]=GRAY;
				DFS_Visit(i);
				visited[i]=BLACK;
			}
			else if (visited[i]==GRAY)
				nope=true;
		}
	}
	timing++;
	finishing_time[src]=timing;
}

void DFS()
{
	for (int j=1;j<=N;j++)
	{
		if ( W[0][j]==1 )
		{
			if (visited[j]==WHITE)
			{
				visited[j]=GRAY;
				DFS_Visit(j);
				visited[j]=BLACK;
			}
			else if (visited[j]==GRAY)
				nope=true;
		}
	}
}

int main(void)
{
	int M,num,bef,now;
	scanf("%d%d",&N,&M);

	for (int i=0;i<M;i++)
	{
		scanf("%d",&num);
		bef=0;
		for (int j=0;j<num;j++)
		{
			scanf("%d",&now);
			W[bef][now]=1;
			bef=now;
		}
	}

	DFS();

	if (nope)
		printf("0\n");
	else
	{
		for (int i=1;i<=N;i++)
		{
	//		cout<<finishing_time[i]<<"::"<<endl;
			container.push_back(pair<int,int> (finishing_time[i],i));
		}
		sort(container.begin(),container.end(),greater< pair<int,int> > ());

		for (int i=0;i<N;i++)
			printf("%d\n",container[i].second);
	}

	return 0;
}
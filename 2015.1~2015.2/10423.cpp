#include <iostream>
#include <string.h>

using namespace std;

int power_src[1000];
int W[1001][1001];
int nearest[1001];
int dis[1001];
int K;

bool isSrc(int idx)
{
	for (int i=0;i<K;i++)
	{
		if (power_src[i]==idx)
		{
			//cout<<"true"<<endl;
			return true;
		}
	}
	//cout<<"false"<<endl;
	return false;
}

int main(void)
{
	int N,M;
	cin>>N>>M>>K;

	if (N==K)
	{
		cout<<0<<endl;
		return 0;
	}
	
	memset(W,20132431,sizeof(W));

	int pwr_src;
	for (int i=0;i<K;i++)
	{
		cin>>pwr_src;
		power_src[i]=pwr_src;
	}

	int a,b,weight;
	for (int i=0;i<M;i++)
	{
		cin>>a>>b>>weight;
		W[a][b]=weight;
		W[b][a]=weight;
	}

	for (int l=0;l<K;l++)
	{
		int src=power_src[l];
		for (int i=1;i<=N;i++)
		{
			if (i!=src)
			{
				if (dis[i]==0)
				{
					nearest[i]=src;
					dis[i]=W[src][i];
				}
				else
				{
					if (W[src][i]<dis[i])
					{
						nearest[i]=src;
						dis[i]=W[src][i];
					}
				}
			}
		}
		
	//for (int i=0;i<N;i++)
//		cout<<dis[i]<<" ";
	//cout<<endl;
	}


	/*
	for (int i=1;i<K;i++)
	{
		src=power_src[i];
		dis[src]=-1;
		for (int j=1;j<=N;j++)
		{
			if (W[j][src]<dis[j])
			{
				dis[j]=W[j][src];
				nearest[j]=src;
			}
		}
	}*/

	int edge_sum=0;
	for (int i=1;i<=N;i++)
	{
		if (!isSrc(i))
		{
			int min=20132431;
			int vnear=0;

			for (int j=1;j<=N;j++)
			{
				if (!isSrc(j))
				{
					if ((0<=dis[j]) && (dis[j]<=min))
					{
						min=dis[j];
						vnear=j;
					}
				}
			}

			//cout<<"W : "<<W[vnear][nearest[vnear]]<<endl;
			edge_sum+=W[vnear][nearest[vnear]];
			dis[vnear]=-1;
			for (int j=1;j<=N;j++)
			{
				if (!isSrc(j))
				{
					if (W[j][vnear]<dis[j])
					{
						dis[j]=W[j][vnear];
						nearest[j]=vnear;
					}
				}
			}
		}
	}

	cout<<edge_sum<<endl;

	return 0;
}
#include <iostream>
#include <cstring>

using namespace std;

int W[1001][1001];
int length[1001];
int nearest[1001];
int bef_value[1001];
int after_value[1001];
int N;

void dijkstra(int src,int ver)
{
//	for (int i=0;i<=1000;i++)
//		length[i]=0x7FFFFFFE;

	for (int i=1;i<=N;i++)
	{
		length[i]=W[src][i];
		nearest[i]=src;
	}

	for (int i=1;i<=N-1;i++)
	{
		int vertex_near=1;
		int minimum=0x7FFFFFFF;
		for (int j=1;j<=N;j++)
		{
			if (j!=src)
			{
				if ((0<length[j]) && (length[j]<minimum))
				{
					minimum=length[j];
					vertex_near=j;
				}
			}
		}
	//	cout<<vertex_near<<":: "<<minimum<<endl;

		if (!ver)
			bef_value[vertex_near]=minimum;
		else
			after_value[vertex_near]=minimum;

		for (int k=1;k<=N;k++)
		{
			if ((k!=src))
			{
//				cout<<"l[ver_near] :"<<length[vertex_near]<<", W :"<<W[vertex_near][k]<<", --length[k] "<<length[k]<<endl;
				if ((length[vertex_near]+W[vertex_near][k])<length[k])
				{
	//				cout<<"diff k :"<<k<<endl;
					length[k]=length[vertex_near]+W[vertex_near][k];
					nearest[k]=vertex_near;
				}
			}
		}
		length[vertex_near]=-1;
	}
}

int main(void)
{
	int M,X;
	int from,to,weigh;
	cin>>N>>M>>X;
	
	for (int i=0;i<=1000;i++)
	{
		for (int j=0;j<=1000;j++)
			W[i][j]=0x20132431;
	}

	for (int i=0;i<M;i++)
	{
		cin>>from>>to>>weigh;
		W[from][to]=weigh;
	}
	
	//dijkstra
//	cout<<"bef"<<endl;
	dijkstra(X,0);

/*	for (int i=0;i<=N;i++)
		cout<<length[i]<<" ";
	cout<<endl;
	*/
	//transpose
	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=i;j++)
		{
			int tmp=W[i][j];
			W[i][j]=W[j][i];
			W[j][i]=tmp;
		}
	}
	//dijkstra
//	cout<<"after"<<endl;
	dijkstra(X,1);

	int summation=-1;
	for (int i=1;i<=N;i++)
	{
//		cout<<bef_value[i]<<", "<<after_value[i]<<endl;
		if (summation<(after_value[i]+bef_value[i]))
			summation=(after_value[i]+bef_value[i]);
	}
	cout<<summation<<endl;

	return 0;
}
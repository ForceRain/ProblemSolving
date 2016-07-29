#include <iostream>

using namespace std;

int W[1001][1001];
int length[1001];
int nearest[1001];
int fin_length[1001];

int main(void)
{
	int vertex_num,edge_num;
	cin>>vertex_num;
	cin>>edge_num;

	int from,to,weight;
	for (int i=0;i<edge_num;i++)
	{
		cin>>from>>to>>weight;
		W[from][to]=weight;
	}

	int start,destination;
	cin>>start>>destination;

	for (int i=1;i<=vertex_num;i++)
	{
		if (i!=start)
		{
			nearest[i]=start;
			length[i]=W[start][i];
		}
	}

	for (int i=0;i<=vertex_num;i++)
	{
		if ((length[i]==0) && (i!=start))
			length[i]=20132432;
	}

	int sum_edge=0;
	for (int i=1;i<vertex_num;i++)
	{
		if (i!=start)
		{
			int minimum=20132431;
			int vertex_near=start;

			for (int j=1;j<=vertex_num;j++)
			{
				if (j!=start)
				{
					if ((0<=length[j])&&(length[j]<=minimum))
					{
						minimum=length[j];
						vertex_near=j;
					}
				}
			}
			fin_length[vertex_near]+=W[nearest[vertex_near]][vertex_near];
		
		/*	cout<<"length : ";
			for (int k=0;k<=vertex_num;k++)
				cout<<length[k]<<" ";
			cout<<endl;
			*/
			for (int k=0;k<=vertex_num;k++)
			{
				if (length[k]!=-1)
					fin_length[k]=length[k];
			}

			for (int j=1;j<=vertex_num;j++)
			{
				if (W[vertex_near][j]!=0)
				{
					if (length[vertex_near]+W[vertex_near][j]<length[j])
					{
						length[j]=length[vertex_near]+W[vertex_near][j];
						nearest[j]=vertex_near;
					}
				}
			}
			length[vertex_near]=-1;
		}
	}

	cout<<fin_length[destination]<<endl;

	return 0;
}
#include <iostream>

using namespace std;

int W[1001][1001]={0};

int out_distance[1001]={0};
int out_nearest[1001]={0};
bool check[1001];

int main(void)
{
    int vertex_num,edge_num;
    cin>>vertex_num;
		
	cin>>edge_num;
    
    int src,minimum_weight=20132431;

    for (int i=0;i<edge_num;i++)
    {
        int from,to,weight;
        cin>>from>>to>>weight;
        
        if (minimum_weight>weight)
        {
            src=from;
            minimum_weight=weight;
        }
        
        W[from][to]=weight;W[to][from]=weight;
    }
    
	for (int i=0;i<=vertex_num;i++)
	{
		if (out_distance[i]==0)
			out_distance[i]=20132431;
	}

	//cout<<"src : "<<src<<endl;

    for (int i=1;i<=vertex_num;i++)
    {
        if ((i!=src) && (W[src][i]!=0))
        {
            out_nearest[i]=src;
            out_distance[i]=W[src][i];
        }
    }
    
    long long weight_sum=0;
    
    for (int i=1;i<=vertex_num;i++)
    {
        if (i!=src)
        {
            int l_minimum=20132431;
            int vertex_near=-1;

           // for (int i=0;i<=vertex_num;i++)
			//	cout<<out_distance[i]<<" ";
			//cout<<endl;

            for (int j=1;j<=vertex_num;j++)
            {
				if (j!=src)
				{
					if ((0<=out_distance[j]) && (out_distance[j]<=l_minimum))
					{
						l_minimum=out_distance[j];
						vertex_near=j;
					}
				}
            }
            
			//cout<<"l_minimum : "<<l_minimum<<endl;
			//cout<<"vertex near : "<<vertex_near<<endl;

			check[vertex_near]=true;
            weight_sum+=W[vertex_near][out_nearest[vertex_near]];
			//cout<<"weight sum : "<<weight_sum<<endl;
            out_distance[vertex_near]=-1;

            for (int j=1;j<=vertex_num;j++)
            {
				if (W[j][vertex_near]!=0)
				{
					if ((W[j][vertex_near]<out_distance[j]) && !check[j])
					{
						out_distance[j]=W[j][vertex_near];
						out_nearest[j]=vertex_near;
					}
				}
            }
        }
    }
    
    cout<<weight_sum<<endl;
    
    return 0;
}
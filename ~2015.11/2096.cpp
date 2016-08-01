#include <iostream>
#include <algorithm>

using namespace std;

int W[100001][3];
int find_max[3];
int find_min[3];
int looping_map[3][3]={{0,1,-1},{0,1,2},{1,2,-1}};

int main(void)
{
	int N;
	int a,b,c;
	cin>>N;

	for (int i=0;i<N;i++)
		cin>>W[i][0]>>W[i][1]>>W[i][2];

	for (int i=0;i<3;i++)
	{
		find_max[i]=W[0][i];
		find_min[i]=W[0][i];
	}
	
	for (int i=1;i<N;i++)
	{
		for (int j=0;j<3;j++)
		{
			int maxi=-1;
			int mini=0x7FFFFFFF;
			
			for (int k=0;k<3;k++)
			{
				if (looping_map[j][k]!=-1)
				{
					int value=W[i][looping_map[j][k]];
					
					if (maxi<find_max[j]+value)
						maxi=find_max[j]+value;
					if (mini>find_min[j]+value)
						mini=find_min[j]+value;
				}
			}
			find_max[j]=maxi;
			find_min[j]=mini;
		}
	}
	sort(find_max,find_max+3);
	sort(find_min,find_min+3);

	cout<<find_max[2]<<" "<<find_min[0]<<endl;

	return 0;
}
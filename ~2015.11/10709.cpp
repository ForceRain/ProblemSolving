#include <iostream>

using namespace std;

char one_line[110];
int space[101][101];

int main(void)
{
	int N,M,incr=-1;
	bool num_start=false;
	cin>>N>>M;
	for (int i=0;i<N;i++)
	{
		cin>>one_line;
		num_start=false;
		incr=-1;
		for (int j=0;j<M;j++)
		{
			if (one_line[j]=='c')
			{
				num_start=true;
				incr=0;
			}
			space[i][j]=incr;
			if (num_start)
				incr++;
		}
	}

	for (int i=0;i<N;i++)
	{
		for (int j=0;j<M;j++)
		{
			cout<<space[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
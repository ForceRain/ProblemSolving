#include <iostream>

using namespace std;

int space[51][51];
char input_buffer[100];
int mini_num=0x7FFFFFFF;

int check_it(bool mode,int start_x,int start_y)			// mode = true면 W부터 시작하는 체스판 기준.
{
	int cnt=0;
	int lim_x=start_x+8;
	int lim_y=start_y+8;
	for (int i=start_x;i<lim_x;i++)
	{
		for (int j=start_y;j<lim_y;j++)
		{
			if (mode && ((i+j)%2==space[i][j]))
				cnt++;
			if (!mode && ((i+j)%2!=space[i][j]))
				cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	int N,M;
	cin>>N>>M;
	for (int i=0;i<N;i++)
	{
		cin>>input_buffer;
		for (int j=0;j<M;j++)
		{
			if (input_buffer[j]=='W')
				space[i][j]=1;
			else
				space[i][j]=0;
		}
	}
	/*
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<M;j++)
			cout<<space[i][j]<<" ";
		cout<<endl;
	}*/

	int limt_x=N-8;
	int limt_y=M-8;
	int tmp;
	for (int i=0;i<=limt_x;i++)
	{
		for (int j=0;j<=limt_y;j++)
		{
			tmp=check_it((space[i][j]==1),i,j);
			if (tmp<mini_num)
				mini_num=tmp;
		}
	}
	cout<<mini_num<<endl;

	return 0;
}
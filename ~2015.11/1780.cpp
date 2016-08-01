#include <iostream>

using namespace std;

int space[3000][3000];
int zero_cnt;
int minus_one_cnt;
int one_cnt;

void di_and_con(int start_x,int start_y, int end_x,int end_y)
{
	int value=space[start_x][start_y];
	bool nope=false;
	for (int i=start_x;i<end_x;i++)
	{
		for (int j=start_y;j<end_y;j++)
		{
			if (value!=space[i][j])
				nope=true;
		}
	}
	if (nope)
	{
		int diff_x=end_x-start_x;
		int diff_y=end_y-start_y;
		di_and_con(start_x,start_y,start_x+diff_x/3,start_y+diff_y/3);
		di_and_con(start_x+diff_x/3,start_y,start_x+2*(diff_x/3),start_y+diff_y/3);
		di_and_con(start_x+2*(diff_x/3),start_y,start_x+diff_x,start_y+diff_y/3);
		di_and_con(start_x,start_y+diff_y/3,start_x+diff_x/3,start_y+2*(diff_y/3));
		di_and_con(start_x+diff_x/3,start_y+diff_y/3,start_x+2*(diff_x/3),start_y+2*(diff_y/3));
		di_and_con(start_x+2*(diff_x/3),start_y+diff_y/3,start_x+diff_x,start_y+2*(diff_y/3));
		di_and_con(start_x,start_y+2*(diff_y/3),start_x+diff_x/3,start_y+diff_y);
		di_and_con(start_x+diff_x/3,start_y+2*(diff_y/3),start_x+2*(diff_x/3),start_y+diff_y);
		di_and_con(start_x+2*(diff_x/3),start_y+2*(diff_y/3),start_x+diff_x,start_y+diff_y);
	}
	else
	{
		if (value==0)
			zero_cnt++;
		else if (value==1)
			one_cnt++;
		else
			minus_one_cnt++;
	}
}

int main(void)
{
	int N;
	cin>>N;
	
	for (int i=0;i<N;i++)
		for (int j=0;j<N;j++)
			cin>>space[i][j];

	int value=space[0][0];
	bool nope=false;
	for (int i=0;i<N;i++)
		for (int j=0;j<N;j++)
			if (space[i][j]!=value)
				nope=true;
	if (nope)
	{
		di_and_con(0,0,N/3,N/3);
		di_and_con(N/3,0,2*(N/3),N/3);
		di_and_con(2*(N/3),0,N,N/3);
		di_and_con(0,N/3,N/3,2*(N/3));
		di_and_con(N/3,N/3,2*(N/3),2*(N/3));
		di_and_con(2*(N/3),N/3,N,2*(N/3));
		di_and_con(0,2*(N/3),N/3,N);
		di_and_con(N/3,2*(N/3),2*(N/3),N);
		di_and_con(2*(N/3),2*(N/3),N,N);
	}
	else
	{
		if (value==0)
			zero_cnt++;
		else if (value==1)
			one_cnt++;
		else
			minus_one_cnt++;
	}

	cout<<minus_one_cnt<<endl;
	cout<<zero_cnt<<endl;
	cout<<one_cnt<<endl;

	return 0;
}
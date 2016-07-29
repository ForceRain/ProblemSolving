#include <iostream>

using namespace std;

int map[51][51];
bool visit[51][51];
int number;
int lx;
int ly;

void cal_map(int x,int y)
{
//	cout<<"x : "<<x<<", y : "<<y<<endl;
	if (((0<=x) && (x<lx)) && ((0<=y) && (y<ly)))
	{
		if ((map[x][y]==1) && (!visit[x][y]))
		{
			visit[x][y]=true;

			//if (((x-1)>=0) && ((y-1)>=0))		cal_map(x-1,y-1);
			if ((x-1)>=0)						cal_map(x-1,y);
			//if (((x-1)>=0) && ((y+1)<C))		cal_map(x-1,y+1);
			if ((y-1)>=0)						cal_map(x,y-1);
			if ((y+1)<ly)						cal_map(x,y+1);
			//if (((x+1)<R) && ((y-1)>=0))		cal_map(x+1,y-1);
			if ((x+1)<lx)						cal_map(x+1,y);
			//if (((x+1)<R) && ((y+1)<C))			cal_map(x+1,y+1);
		}
	}
}

int main(void)
{
	int N,times,x,y;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		number=0;
		cin>>lx>>ly>>times;
		
		for (int i=0;i<lx;i++)
		{
			for (int j=0;j<ly;j++)
			{
				map[i][j]=0;
				visit[i][j]=true;
			}
		}

		for (int k=0;k<times;k++)
		{
			cin>>x>>y;
			map[x][y]=1;
			visit[x][y]=false;
		}

		for (int i=0;i<lx;i++)
		{
			for (int j=0;j<ly;j++)
			{
				if ((!visit[i][j]) && (map[i][j]==1))
				{
					cal_map(i,j);
					number++;
				}
			}
		}
		cout<<number<<endl;
	}

	return 0;
}
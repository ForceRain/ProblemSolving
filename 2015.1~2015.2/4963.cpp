#include <iostream>

using namespace std;

int map[51][51];
bool visit[51][51];
int number;
int R;
int C;

void cal_map(int x,int y)
{
//	cout<<"x : "<<x<<", y : "<<y<<endl;
	if (((0<=x) && (x<R)) && ((0<=y) && (y<C)))
	{
		if ((map[x][y]==1) && (!visit[x][y]))
		{
			visit[x][y]=true;

			if (((x-1)>=0) && ((y-1)>=0))		cal_map(x-1,y-1);
			if ((x-1)>=0)						cal_map(x-1,y);
			if (((x-1)>=0) && ((y+1)<C))		cal_map(x-1,y+1);
			if ((y-1)>=0)						cal_map(x,y-1);
			if ((y+1)<C)						cal_map(x,y+1);
			if (((x+1)<R) && ((y-1)>=0))		cal_map(x+1,y-1);
			if ((x+1)<R)						cal_map(x+1,y);
			if (((x+1)<R) && ((y+1)<C))			cal_map(x+1,y+1);
		}
	}
}

int main(void)
{
	int tmp;
	while (true)
	{
		number=0;
		cin>>C>>R;
		if ((R==0) && (C==0))
			break;

		for (int i=0;i<R;i++)
		{
			for (int j=0;j<C;j++)
			{
				cin>>tmp;
				map[i][j]=tmp;
				if (tmp==0)
					visit[i][j]=true;
				else
					visit[i][j]=false;
			}
		}

		for (int i=0;i<R;i++)
		{
			for (int j=0;j<C;j++)
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
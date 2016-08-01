#include <iostream>

using namespace std;

int main(void)
{
	int test,N,M,x,y,mov_x,mov_y,y_cnt=0;
	bool isOver=false,x_o,y_o;
	cin>>test;

	for (int i=0;i<test;i++)
	{
		mov_x=0,mov_y=0,y_cnt=0;
		isOver=false;
		cin>>N>>M>>x>>y;
		while (true)
		{
			x_o=false,y_o=false;
			if (mov_x==x && mov_y==y)
				break;
			if (mov_x<N)
				mov_x++;
			else
			{
				x_o=true;
				mov_x=1;
			}
			if (mov_y<M)
				mov_y++;
			else
			{
				y_o=true;
				mov_y=1;
			}

			if (x_o && y_o)
			{
				isOver=true;
				break;
			}
			y_cnt++;
		}
		if (isOver)
			cout<<-1<<endl;
		else
			cout<<y_cnt<<endl;
	}
	
	return 0;
}
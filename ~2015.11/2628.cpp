#include <iostream>

using namespace std;

int x_space[101];
int y_space[101];

int main(void)
{
	int R,C;
	cin>>R>>C;
	x_space[R]=1;
	y_space[C]=1;
	int loop,comd,lin;
	cin>>loop;

	for (int i=0;i<loop;i++)
	{
		cin>>comd>>lin;
		if (comd==1)
			x_space[lin]=1;
		else
			y_space[lin]=1;
	}
	int max_x=-1,max_y=-1;
	int bef_ptr=0;
	for (int i=1;i<=R;i++)
	{
		if (x_space[i]==1)
		{
			if ((i-bef_ptr)>max_x)
				max_x=i-bef_ptr;
			bef_ptr=i;
		}
	}
	bef_ptr=0;
	for (int i=1;i<=C;i++)
	{
		if (y_space[i]==1)
		{
			if ((i-bef_ptr)>max_y)
				max_y=i-bef_ptr;
			bef_ptr=i;
		}
	}
	cout<<max_x*max_y<<endl;

	return 0;
}
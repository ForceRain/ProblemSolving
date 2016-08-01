#include <iostream>

using namespace std;

char space[101][101];

int main(void)
{
	int R,C;
	char tmp[101];
	int c_x,c_y;
	cin>>R>>C;

	for (int i=0;i<R;i++)
	{
		cin>>tmp;
		for (int j=0;j<C;j++)
		{
			space[i][j]=tmp[j];
			space[2*R-1-i][j]=tmp[j];
			space[2*R-1-i][2*C-1-j]=tmp[j];
			space[i][2*C-1-j]=tmp[j];
		}
	}
	cin>>c_x>>c_y;

	if (space[c_x-1][c_y-1]=='.')
		space[c_x-1][c_y-1]='#';
	else
		space[c_x-1][c_y-1]='.';

	for (int i=0;i<2*R;i++)
	{
		for (int j=0;j<2*C;j++)
			cout<<space[i][j];
		cout<<endl;
	}


	return 0;
}
#include <iostream>

using namespace std;

int space[501][501];

int main(void)
{
	int N;
	int min_x,min_y,val,min=0x7FFFFFFF;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		for (int j=0;j<N;j++)
		{
			cin>>val;
			space[i][j]=val;
			if (min>val)
			{
				min_x=i;
				min_y=j;
				min=val;
			}
		}
	}




	return 0;
}
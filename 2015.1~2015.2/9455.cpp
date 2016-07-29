#include <iostream>

using namespace std;

int space[100][100];

int calculate(int row,int col)
{
	int sum=0;
	int down_ptr;
	int upper_ptr;

	for (int j=0;j<col;j++)
	{
		down_ptr=row;
		upper_ptr=row-1;

		while (upper_ptr>=0)
		{
			if (space[upper_ptr][j]==1)
			{
				sum+=down_ptr-upper_ptr-1;
				down_ptr--;
			}
			upper_ptr--;
		}
	}

	return sum;
}

int main(void)
{
	int N;
	cin>>N;
	
	int row,col,tmp;
	for (int i=0;i<N;i++)
	{
		cin>>row>>col;
		for (int j=0;j<row;j++)
		{
			for (int k=0;k<col;k++)
			{
				cin>>tmp;
				space[j][k]=tmp;
			}
		}

		cout<<calculate(row,col)<<endl;
	}

	return 0;
}
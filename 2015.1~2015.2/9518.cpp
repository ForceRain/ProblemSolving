#include <iostream>

using namespace std;

char input[51][51];
int space[51][51];
int maximum=-1;

void calculate(int R,int S)
{
	for (int i=0;i<R;i++)
	{
		for (int j=0;j<S;j++)
		{
			if (input[i][j]=='o')
			{
				if ((i-1)>=0 && (j-1)>=0) space[i-1][j-1]++;
				if ((i-1)>=0) space[i-1][j]++;
				if ((i-1)>=0 && (j+1)<S) space[i-1][j+1]++;
				if ((j-1)>=0) space[i][j-1]++;
				if ((j+1)<S) space[i][j+1]++;
				if ((i+1)<R && (j-1)>=0) space[i+1][j-1]++;
				if ((i+1)<R) space[i+1][j]++;
				if ((i+1)<R && (j+1)<S) space[i+1][j+1]++;
			}
		}
	}

	for (int i=0;i<R;i++)
	{
		for (int j=0;j<S;j++)
		{
			if ((maximum<space[i][j]) && (input[i][j]!='o'))
				maximum=space[i][j];
		}
	}
}

int main(void)
{
	int	R,S;
	cin>>R>>S;

	for (int i=0;i<R;i++)
	{
		cin>>input[i];
	}

	calculate(R,S);

	cout<<maximum<<endl;

	return 0;
}
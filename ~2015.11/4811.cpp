#include <iostream>

using namespace std;

unsigned long long space[61][31];

int main(void)
{
	int N;
	for (int i=1;i<61;i++)
	{
		for (int j=0;j<=i;j++)
		{
			if (i==j || j==0)
				space[i][j]=1;
			else
				space[i][j]=space[i-1][j]+space[i-1][j-1];
		}
	}

	while (true)
	{
		cin>>N;
		if (N==0)
			break;
		cout<<space[2*N][N]/(N+1)<<endl;
	}
	return 0;
}
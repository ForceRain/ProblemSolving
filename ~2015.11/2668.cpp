#include <iostream>

using namespace std;

int space[101][101];

int main(void)
{
	int N,tmp;
	cin>>N;

	for (int i=1;i<=N;i++)
	{
		cin>>tmp;
		space[i][tmp]=1;
		space[tmp][i]=1;
	}

	// alternating path 찾고.
	// hungarian method 사용해서 maximum matching 찾아내기.

	return 0;
}
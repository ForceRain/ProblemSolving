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

	// alternating path ã��.
	// hungarian method ����ؼ� maximum matching ã�Ƴ���.

	return 0;
}
#include <iostream>

using namespace std;

int space[6];

int main(void)
{
	int N,tmp;
	cin>>N;

	for (int i=0;i<5;i++)
	{
		cin>>tmp;
		space[tmp]++;
	}
	cout<<space[N]<<endl;
	return 0;
}
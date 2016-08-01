#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin>>N;
	unsigned long long val=1;

	for (int i=2;i<=N;i++)
		val*=i;
	cout<<val<<endl;

	return 0;
}
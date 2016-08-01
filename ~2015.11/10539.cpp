#include <iostream>

using namespace std;

int space[101];

int main(void)
{
	int N,num;
	cin>>N;

	for (int i=1;i<=N;i++)
	{
		cin>>num;
		space[i]=num*i;
	}
	
	cout<<space[1]<<" ";
	for (int i=1;i<N;i++)
		cout<<space[i+1]-space[i]<<" ";
	cout<<endl;

	return 0;
}
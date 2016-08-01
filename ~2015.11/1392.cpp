#include <iostream>
#include <algorithm>

using namespace std;

int space[101];

int main(void)
{
	int N,Q,tmp;
	cin>>N>>Q;
	for(int i=0;i<N;i++)
	{
		cin>>tmp;
		if (i!=0)
			space[i]=space[i-1]+tmp;
		else
			space[i]=tmp;
	}
	
	for (int i=0;i<101;i++)
		cout<<space[i]<<" ";
	cout<<endl;

	for (int j=0;j<Q;j++)
	{
		cin>>tmp;
		int* pos=lower_bound(space,space+N,tmp);
		cout<<pos-space<<endl;
	}

	return 0;
}
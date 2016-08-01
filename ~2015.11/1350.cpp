#include <iostream>

using namespace std;

int files[1001];

int main(void)
{
	int N,cluster;
	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>files[i];
	}
	cin>>cluster;
	unsigned long long summation=0;
	for (int i=0;i<N;i++)
	{
		if ((files[i]%cluster)!=0)
			summation+=((files[i]/cluster)+1)*cluster;
		else
			summation+=(files[i]/cluster)*cluster;
	}
	cout<<summation<<endl;

	return 0;
}
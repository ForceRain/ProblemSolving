#include <iostream>

using namespace std;

long long arr[100];

int main(void)
{
	int N;
	cin>>N;

	arr[0]=1;
	arr[1]=1;
	arr[2]=1;
	arr[3]=2;
	arr[4]=2;
	arr[5]=3;

	long long num=0;

	for (int t=5;t<100;t++)
	{
		arr[t]=arr[t-1]+arr[t-5];
	}
	for (int i=0;i<N;i++)
	{
		cin>>num;
		cout<<arr[num-1]<<endl;
	}

	return 0;
}
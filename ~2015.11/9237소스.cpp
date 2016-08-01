#include <iostream>
#include <algorithm>

int arr[100001];

using namespace std;

int main(void)
{
	int N,tmp;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		arr[i]=tmp;
	}

	sort(arr,arr+N);

	for (int i=N-1;i>=0;i--)
		arr[i]+=(N-i);

	sort(arr,arr+N);

	cout<<arr[N-1]+1<<endl;

	return 0;
}
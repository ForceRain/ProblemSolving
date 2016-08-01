#include <iostream>
#include <algorithm>

using namespace std;

int eggs[1001];

int main(void)
{
	int N,M;
	cin>>N>>M;

	for (int i=0;i<M;i++)
		cin>>eggs[i];

	sort(eggs,eggs+M);
	long long maxi=-1;
	int value=0;
	int target;
	for (int i=0;i<M;i++)
	{
		target=eggs[i];
		if (maxi<target*(M-i))
		{
			maxi=target*(M-i);
			value=target;
		}
	}
	cout<<value<<" "<<maxi<<endl;

	return 0;
}
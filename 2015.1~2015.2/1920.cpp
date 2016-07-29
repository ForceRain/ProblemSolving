#include <iostream>
#include <algorithm>

using namespace std;

int arr[100000];
int arr_size;

bool ans_find(int ans_key)
{
	int high=arr_size;
	int low=0;
	int mid=(high+low)/2;
	while (low<=high)
	{
		mid=(high+low)/2;
		if (ans_key<arr[mid])
			high=mid-1;
		else if (ans_key>arr[mid])
			low=mid+1;
		else
			return true;
	}
	return false;
}

int main(void)
{
	int ans_size;

	cin>>arr_size;
	for (int i=0;i<arr_size;i++)
		cin>>arr[i];

	sort(arr,arr+arr_size);

	cin>>ans_size;
	int tmp;

	for (int i=0;i<ans_size;i++)
	{
		cin>>tmp;
		cout<<ans_find(tmp)<<endl;
	}
	
	return 0;
}
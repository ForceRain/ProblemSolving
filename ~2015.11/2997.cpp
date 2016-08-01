#include <iostream>
#include <algorithm>

using namespace std;

int arr[4];
int bas_arr[3];

int my_abs(int value)
{
	return (value<0)?-value:value;
}

bool list_okay()
{
	int d=arr[1]-arr[0];
	for (int i=0;i<3;i++)
	{
		if (my_abs(arr[i+1]-arr[i])!=d)
			return false;
	}
	return true;
}

void copy_and_sort(int val)
{
	arr[0]=bas_arr[0];
	arr[1]=bas_arr[1];
	arr[2]=bas_arr[2];
	arr[3]=val;

	sort(arr,arr+4);
}

int main(void)
{
	cin>>bas_arr[0]>>bas_arr[1]>>bas_arr[2];

	for (int i=-400;i<=400;i++)
	{
		copy_and_sort(i);
		if (list_okay())
		{
			cout<<i<<endl;
			break;
		}
	}

	return 0;
}
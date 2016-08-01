#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int a,b,c;

	while (true)
	{
		cin>>a>>b>>c;

		if ((a+b+c)==0)
			break;

		int arr[3]={a,b,c};
		sort(arr,arr+3);

		if (arr[2]*arr[2]==arr[1]*arr[1]+arr[0]*arr[0])
			cout<<"right"<<endl;
		else
			cout<<"wrong"<<endl;
	}
}
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
	int arr[4];
	int arr2[2];
	for ( int i=0;i<4;i++ )	scanf("%d",&arr[i]);
	for ( int i=0;i<2;i++ )	scanf("%d",&arr2[i]);

	sort(arr,arr+4);
	sort(arr2,arr2+2);

	printf("%d\n",arr[1]+arr[2]+arr[3]+arr2[1]);

	return 0;
}
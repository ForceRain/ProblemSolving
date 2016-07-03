#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int arr[1000];

int main(void)
{
	int N;
	scanf("%d",&N);

	int summ = 0;
	for ( int i=0;i<N;i++ )
	{
		scanf("%d",&arr[i]);
		summ += arr[i];
	}
	sort(arr,arr+N);
	printf("%.6lf\n",((double)summ/N));
	double median = 0.0;

	if ( N%2 == 0 )
		median = (arr[N/2] + arr[N/2-1] )/2.0;
	else
		median = arr[N/2];
	printf("%.6lf\n",median);

	return 0;
}
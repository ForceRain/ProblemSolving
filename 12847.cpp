#include <iostream>
#include <cstdio>

using namespace std;

long long k_sum[100001];

int main(void)
{
	int N,M;
	freopen("test.txt","r",stdin);
	scanf("%d%d",&N,&M);
	long long c_sum = 0;

	for ( int i=0;i<N;i++ )
	{
		int tmp;
		scanf("%d",&tmp);
		c_sum += tmp;
		k_sum[i+1] = c_sum;
	}
	long long maxi = -1;
	
	for ( int j=M; j<=N; j++ )
	{
		long long diff = k_sum[j] - k_sum[j-M];
		if ( maxi < diff )
			maxi = diff;
	}

	printf("%lld\n",maxi);

	return 0;
}
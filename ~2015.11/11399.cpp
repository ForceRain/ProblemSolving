#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int space[1001];

int main(void)
{
	int N,c_sum=0;
	scanf("%d",&N);

	for (int i=0;i<N;i++)	scanf("%d",&space[i]);
	sort(space,space+N);

	long long tot=0;
	for (int i=0;i<N;i++)
	{
		c_sum+=space[i];
		tot+=c_sum;
	}
	printf("%lld\n",tot);

	return 0;
}
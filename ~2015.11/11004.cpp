#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

long long space[2000001];
vector<int> result;

int main(void)
{
	int N,K,val;
	int u_b=0xB0000000,l_b=0x7FFFFFFF;
	scanf("%d%d",&N,&K);

	for (int i=0;i<N;i++)
	{
		scanf("%d",&val);
		space[val+1000000]++;
		if ( val+1000000 < l_b )
			l_b=val+1000000;
		if ( val+1000000 > u_b )
			u_b=val+1000000;
	}
	long long accum_sum=space[l_b];
	for (int i=l_b+1;i<=u_b;i++)
	{
		result.push_back(accum_sum);
		accum_sum+=space[i];
	}
	int pos1=upper_bound(result.begin(),result.end(),K)-result.begin();
	int pos2=lower_bound(result.begin(),result.end(),K)-result.begin();

	cout<<pos1<<", "<<pos2<<endl;
//	printf("%d\n",space[K-1]);

	return 0;
}

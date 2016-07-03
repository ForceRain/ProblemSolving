#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

vector <long long> container;
vector <pair < long long,long long > > freq_cont;
long long mapped[10001];

bool my_compare( pair<long long,long long> a, pair<long long,long long> b )
{
	if ( a.second > b.second )
		return true;
	else
	{
		if ( a.first < b.first	)
			return true;
		else	return false;
	}
}

int main(void)
{
	long long N;
	freopen("test.txt","r",stdin);
	scanf("%lld",&N);
	long long summation = 0;
	long long max = LLONG_MIN;
	long long min = LLONG_MAX;
	long long maxPos = 0;

	for ( int i=0;i<N;i++ )
	{
		long long val;
		scanf("%lld",&val);

		if ( val < min )
			min = val;
		if ( val > max )
			max = val;

		mapped[val+5000]++;
		
		container.push_back(val);
		summation += val;
	}
	for ( int i = 0 ;i < 10001;i++ )
	{
		if ( mapped[i] != 0 )
			freq_cont.push_back( pair<long long,long long> (i-5000,mapped[i]) );
	}
	sort(freq_cont.begin(),freq_cont.end(),my_compare);
	
	long long maxi = freq_cont[0].second;
	maxPos = freq_cont[0].first;

	if ( ( freq_cont.size() > 1 ) && freq_cont[1].second == maxi )
		maxPos = freq_cont[1].first;

	sort(container.begin(),container.end());
	int sz = container.size();

	printf("%lld\n",summation/N);
	printf("%d\n",container[sz/2]);
	printf("%d\n",maxPos);
	printf("%d\n",max-min);

	return 0;
}
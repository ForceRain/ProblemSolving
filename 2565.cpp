#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

vector < pair<int,int> > container;

bool my_compare( pair<int,int> a, pair<int,int> b )
{
	if ( a.first < b.first )
		return true;
	else return false;
}

int dp[501];

int main(void)
{
	int N;
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
	{
		int a,b;
		scanf("%d%d",&a,&b);
		container.push_back(pair<int,int>(a,b));
	}
	sort(container.begin(),container.end(),my_compare);

	for ( int i=0;i<501;i++ )	dp[i] = 1;

	for ( int i=1;i<=N;i++ )
	{
		int max = dp[i];
		for ( int j=i-1; j>0 ;j-- )
		{
			if ( container[i-1].second > container[j-1].second )
			{
				if ( dp[j]+1 > max )
					max = dp[j]+1;
			}
		}
		if ( dp[i] < max )
			dp[i] = max;
	}

	int val = -1;
	for ( int i=1;i<=N;i++ )	if ( dp[i] > val )	val = dp[i];

	printf("%d\n",N-val);

	return 0;
}
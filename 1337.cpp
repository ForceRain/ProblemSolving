#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int space[10001];
int dp[10001];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
		scanf("%d",&space[i]);
	sort(space,space+N);


	
	return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

int space[10001];

int main(void)
{
	int N,M;
	freopen("test.txt","r",stdin);
	scanf("%d%d",&N,&M);
	int accSum = 0;
	for ( int i=1;i<=N;i++ )
	{
		int val;
		scanf("%d",&val);
		space [i] = val + accSum;
		accSum += val;
	}
	int cnt = 0;
	for ( int i=0;i<=N;i++ )
	{
		for ( int j=i+1;j<=N;j++ )
		{
			if ( ( space[j] - space[i] ) == M )
				cnt ++;
		}
	}
	printf("%d\n",cnt);

	return 0;
}
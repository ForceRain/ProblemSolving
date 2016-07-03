#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int W,N,H;
	scanf("%d%d%d",&W,&N,&H);

	int cnt = 0;
	for ( int j=0;j<H;j++ )
	{
		int val;
		scanf("%d",&val);

		if ( W<=val && val<=N )
			cnt++;
	}
	printf("%d\n",cnt);

	return 0;
}
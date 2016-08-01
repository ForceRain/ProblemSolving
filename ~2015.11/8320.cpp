#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int space[10001];
int dp[10001];

int main(void)
{
	int N;
	for (int i=1;i<10001;i++)
	{
		int limitation=sqrt(i);
		int counting=0;
		for (int j=1;j<=limitation;j++)
		{
			if ((i%j)==0)
				counting++;
		}
		space[i]=counting;
	}
	for (int i=1;i<10001;i++)
		dp[i]=dp[i-1]+space[i];

	scanf("%d",&N);
	printf("%d\n",dp[N]);

	return 0;
}
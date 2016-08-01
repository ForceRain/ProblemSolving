#include <iostream>
#include <cstdio>

using namespace std;

int weight[100001];
int dp[2000000];

int main(void)
{
	int N,object;
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		scanf("%d",&weight[i]);
		dp[weight[i]]=1;
	}
	scanf("%d",&object);
	int cnt=0;
	for (int i=0;i<N;i++)
	{
		if ( (object-weight[i]) >=0)
		{
			if (dp[object-weight[i]]==1)
				cnt++;
		}
	}
	printf("%d\n",(cnt/2));

	return 0;
}
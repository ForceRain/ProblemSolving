#include <iostream>
#include <cstdio>

using namespace std;

bool visited_space[1001][1001];
int dp[1001];

int get_gcd(int a,int b)
{
	if (b==0)
		return a;
	return get_gcd(b,a%b);
}

int main(void)
{
	dp[1]=3;
	visited_space[1][1]=true;
	for (int add_val=2;add_val<=1000;add_val++)
	{
		int counting=0;
		for (int j=1;j<=add_val;j++)
		{
			int v=get_gcd(add_val,j);
			if (!visited_space[add_val/v][j/v])
			{
				visited_space[add_val/v][j/v]=true;
				counting++;
			}
		}
		dp[add_val]=dp[add_val-1]+counting*2;
	}

	int test,in_val;
	scanf("%d",&test);

	for (int i=0;i<test;i++)
	{
		scanf("%d",&in_val);
		printf("%d\n",dp[in_val]);
	}

	return 0;
}
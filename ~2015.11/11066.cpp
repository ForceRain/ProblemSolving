#include <stdio.h>
#include <limits.h>
#include <memory.h>
int dp[510][510];
int bt[510][510];
int nums[510];
int back(int s, int e)
{
	if (s == e) return 0;
	return back(s, bt[s][e]) + back(bt[s][e] + 1, e) + dp[s][e];
}
int main(void)
{
	//freopen("test.txt", "r", stdin);
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		memset(dp, 0, sizeof(dp));
		for (int i = 0; i < n;i++)
		{
			scanf("%d", nums + i);
			dp[i][i] = nums[i];
		}
		
		for (int diag = 1; diag < n; diag++)
		{
			for (int i = 0; i < n; i++)
			{
				int j = diag + i;
				if (j > n-1) break;
				int max = INT_MAX;

				for (int k = i; k < j; k++)
				{
					int sums=0;
					if (i != k) sums += dp[i][k];
					if (k + 1 != j) sums += dp[k + 1][j];
					
					if (max > sums)
					{
						bt[i][j] = k;
						max = sums;
					}
				}
				int sum=0;
				for (int k = i; k <= j; k++)
				{
					sum += nums[k];
				}

				dp[i][j] = max + sum;
			}
		}
		printf("%d\n", dp[0][n-1]);
	}
}
#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int test;
	scanf("%d", &test);

	int n, m;
	for (int i = 0; i < test; i++)
	{
		scanf("%d%d", &n, &m);
		printf("1\n");
		int x = 0, y = 0;
		if ((n % 2 == 0))
		{
			for (int x=0; x < n; x++)
			{
				if (x % 2 == 0)
				{
					for (int y = 0; y < m; y++)
						printf("(%d,%d)\n", x, y);
				}
				else
				{
					for (int y = m - 1; y >= 0; y--)
						printf("(%d,%d)\n", x, y);
				}
			}
		}
		else if ((m % 2 == 0))
		{
			for (int x=0; x < m; x++)
			{
				if (x % 2 == 0)
				{
					for (int y = 0; y < n; y++)
						printf("(%d,%d)\n", y, x);
				}
				else
				{
					for (int y = n - 1; y >= 0; y--)
						printf("(%d,%d)\n", y, x);
				}
			}
		}
		else
		{
			for (int x=0; x < n; x++)
			{
				if (x % 2 == 0)
				{
					for (int y = 1; y < m; y++)
						printf("(%d,%d)\n", x, y);
				}
				else
				{
					for (int y = m - 1; y >= 1; y--)
						printf("(%d,%d)\n", x, y);
				}
			}
			for (int k = n - 1; k >= 0; k--)
				printf("(%d,0)\n", k);
		}
	}

	return 0;
}
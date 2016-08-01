#include <iostream>
#include <queue>
#include <cstring>
#include <cstdio>

using namespace std;

int acceptable=0;
int N;
int col[16];
int space[16];

int my_abs(int value)
{
	return (value<0)?-value:value;
}

bool promising(int i)
{
	int k=1;
	bool swit=true;

	while ((k<i) && swit)
	{
		if ((col[i]==col[k]) || (my_abs(col[i]-col[k])==my_abs(i-k)))
		{
			swit=false;
		}
		k++;
	}
	return swit;
}

void n_queen(int src)
{
	if (promising(src))
	{
		if (src==N)
			acceptable++;
		else
		{
			for (int j=1;j<=N;j++)
			{
				if (col[src]!=j)
				{
					col[src+1]=j;
					if (space[col[src+1]]==0)
					{
						space[col[src+1]]=1;
						n_queen(src+1);
						space[col[src+1]]=0;
					}
				}
			}
		}
	}
}

int main(void)
{
	scanf("%d",&N);
	n_queen(0);
	printf("%d\n",acceptable);

	return 0;
}
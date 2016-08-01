#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int space[1000001];

int main(void)
{
	int N,M;
	scanf("%d%d",&N,&M);
	
	for (int i=2;i<1000001;i++)
		space[i]=1;

	int limitation=sqrt(M);
	for (int i=2;i<=limitation;i++)
	{
		if (space[i]!=0)
		{
			for (int j=2*i;j<=M;j+=i)
				space[j]=0;
		}
	}
	for (int i=N;i<=M;i++)
	{
		if (space[i]!=0)
			printf("%d\n",i);
	}
	return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

int space[100001];

int main(void)
{
	int N,M,a,b;
	int summation=0,tmp;
	scanf("%d",&N);
	
	for (int i=1;i<=N;i++)
	{
		scanf("%d",&tmp);
		summation+=tmp;
		space[i]=summation;
	}
	scanf("%d",&M);
	for (int i=0;i<M;i++)
	{
		scanf("%d%d",&a,&b);
		printf("%d\n",space[b]-space[a-1]);
	}

	return 0;
}
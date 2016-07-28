#include <stdio.h>

unsigned long long combination(int M,int N)
{
	int hp=M,dp=N;
	int i;
	unsigned long long result=1;
	for (i=0;i<N;i++)
	{
		result=result*(hp--);
		if (result%dp==0)
			result=result/(dp--);
	}
	while (dp>1)
	{
		result=result/(dp--);
	}
	return result;
}

int main(void)
{
	int N,i;
	int a,b;
	scanf("%d",&N);
	unsigned long long ans[N];
	for (i=0;i<N;i++)
	{
		scanf("%d %d",&a,&b);
		ans[i]=combination(b,a);
	}
	for (i=0;i<N;i++)
	{
		printf("%llu\n",ans[i]);
	}
	return 0;
}

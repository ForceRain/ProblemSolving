#include <stdio.h>
unsigned long long nat(int a,int b)
{
	if (a>b)
		return a-b;
	else
		return b-a;
}
int main(void)
{
	int N,M;
	scanf("%d %d",&N,&M);
	clock_t start,end;
	start=clock();
	printf("%lld",nat((N-1)/4,(M-1)/4)+nat((N-1)%4,(M-1)%4));
	end=clock();
	time_checker(start,end);
	return 0;
}

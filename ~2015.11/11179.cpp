#include <iostream>
#include <cstdio>

using namespace std;

int space[50];

int main(void)
{
	int N;
	scanf("%d",&N);
	int ptr=0;
	while ( N > 0 )
	{
		space[ptr++]=N%2;
		N/=2;
	}
	long long summation=0;
	int ruler=1;
	for (int i=ptr-1;i>=0;i--)
	{
		summation+=space[i]*ruler;
		ruler*=2;
	}
	printf("%lld\n",summation);

	return 0;
}
#include <cstdio>
#include <iostream>

using namespace std;

int main(void)
{
	long long sum=0;
	int val;
	while (scanf("%d",&val)!=EOF)
	{
		sum+=val;
	}
	printf("%lld\n",sum);
	return 0;
}
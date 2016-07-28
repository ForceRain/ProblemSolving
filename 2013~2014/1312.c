#include <stdio.h>
int main(void)
{
	int b,loc;
	unsigned long long a;
	unsigned long long mok=0;
	scanf("%lld %d %d",&a,&b,&loc);
	while (loc--)
	{
		a*=10;
	}
	mok=a/b;
	printf("%lld",mok%10);
	return 0;
}

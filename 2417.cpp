#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	long long input;
	scanf("%lld",&input);

	long long lim = sqrt(input);

	if ( lim*lim < input )
		printf("%lld\n",(lim+1));
	else
		printf("%lld\n",(lim));

	return 0;
}
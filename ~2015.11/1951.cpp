#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	unsigned long long N;
	scanf("%llu",&N);

	unsigned long long counting=1;
	unsigned long long answer=0;
	unsigned long long ruler=10;
	unsigned long long following=1;
	while (ruler<=N)
	{
		answer+=((ruler-following)*counting);
		counting++;
		ruler*=10;
		following*=10;
	}

	ruler/=10;
	answer+=(N-ruler+1)*counting;
	printf("%llu\n",answer%1234567);

	return 0;
}
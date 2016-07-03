#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int N;
	scanf("%d",&N);

	int cnt = 0;
	int counter = 1;
	int ruler = 1;

	while ( counter < 32 )
	{
		if ( (ruler & N) != 0 ) cnt++;
		ruler *= 2;
		counter++;
	}
	if ( cnt == 1 )
		printf("1\n");
	else
		printf("0\n");

	return 0;
}
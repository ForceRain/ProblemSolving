#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int test;
	scanf("%d",&test);

	for ( int i=0;i<test;i++ )
	{
		int val;
		scanf("%d",&val);

		unsigned long long nval = val;
		unsigned long long ruler = 1;
		while ( ruler <= nval  )	ruler *=10;

		if ( (ruler/2) < nval )
			nval = ruler/2;

		ruler--;

		printf("%llu\n",nval*(ruler-nval));
	}

	return 0;
}
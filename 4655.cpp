#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	double input;
	freopen("test.txt","r",stdin);
	while ( true )
	{
		scanf("%lf",&input);

		if ( input == 0.00 )
			break;

		int cnt = 1;
		double summation = 0.5;

		while ( input > summation )
		{
			summation +=  (1.0 / (++cnt + 1) );
		}
		printf("%d card(s)\n",cnt);
	}

	return 0;
}
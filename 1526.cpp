	#include <iostream>
	#include <cstdio>

	using namespace std;

	int main(void)
	{
		int val;
		scanf("%d",&val);
		for ( int i=val; i>=0; i-- )
		{
			int checking[10] = {0};
			int tok = i;
			int cnt = 0;
			while ( tok > 0 )
			{
				checking[tok%10]++;
				tok /= 10;
				cnt++;
			}
			if ( (checking[4] + checking[7]) == cnt )
			{
				printf("%d\n",i);
				break;
			}
		}

		return 0;
	}
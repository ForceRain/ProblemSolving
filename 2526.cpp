#include <iostream>
#include <cstdio>

using namespace std;

int cycle[101];

int main(void)
{
	int N,P;
	scanf("%d%d",&N,&P);

	int cnt = 0;
	int v1 = N;
	while ( true )
	{
		cnt++;
		int val = (v1*N) % P;

		if ( cycle[val] != 0 )
		{
			printf("%d\n",(cnt - cycle[val]));
			break;
		}
		cycle[val] = cnt;
		
		v1 = val;
	}

	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	int N;
	scanf("%d",&N);

	int lim = sqrt(N);
	int res = 0;
	bool checked = false;

	for ( int i=2;i<=lim;i++ )
	{
		if ( N%i == 0 )
		{
			int oppo = N/i;
			res = N-oppo;
			checked = true;
			break;
		}
	}
	if ( checked )
		printf("%d\n",res);
	else
		printf("%d\n",N-1);
	return 0;
}
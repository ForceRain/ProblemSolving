#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int X,Y;
	freopen("test.txt","r",stdin);
	while ( scanf("%d%d",&X,&Y) != EOF )
	{
		int k = 0;
		int z = ((float)Y/X)*100;
		if ( z == 100 || z == 99 )
		{
			printf("-1\n");
			continue;
		}
		z++;
		int upper = X*z-100*Y;
		int lower = 100 - z;

		if ( upper%lower == 0 )
			k = upper/lower;
		else
			k = upper/lower + 1;
		
		printf("%d\n",k);
	}
	return 0;
}
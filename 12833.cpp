#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int A,B,C;
	scanf("%d%d%d",&A,&B,&C);

	if ( ( C % 2 ) == 0 )
		printf("%d\n",A);
	else
		printf("%d\n",A^B);

	return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int A,B,C;
	scanf("%d%d%d",&A,&B,&C);
	int val = A % C;
	for ( int i=1;i<B;i++ )
	{
		val = val * A;
		val %= C;
	}
	printf("%d\n",val);

	return 0;
}
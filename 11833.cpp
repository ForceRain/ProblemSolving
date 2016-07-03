#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int N;
	scanf("%d",&N);

	unsigned long long all_a = 0, all_b = 0;
	for (int i=0;i<N;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if ( b==1 )
			all_a +=a;
		else
			all_b +=a;
		if ( all_a > all_b )	printf("<\n");
		else if ( all_a < all_b )	printf(">\n");
		else	printf("?\n");
	}

	return 0;
}
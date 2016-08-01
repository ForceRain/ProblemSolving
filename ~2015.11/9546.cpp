#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int test;
	scanf("%d",&test);

	for (int i=0;i<test;i++)
	{
		long long target=1;
		int loop;
		scanf("%d",&loop);
		for (int j=0;j<loop;j++)
			target*=2;
		printf("%lld\n",target-1);
	}

	return 0;
}
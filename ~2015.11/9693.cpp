#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int num;
	int stage=1;
	while (true)
	{
		scanf("%d",&num);
		if (num==0)
			break;

		int total_cnt=0;
		int ruler=5;
		while (ruler<=num)
		{
			total_cnt+=(num/ruler);
			ruler*=5;
		}
		printf("Case #%d: %d\n",stage++,total_cnt);
	}

	return 0;
}
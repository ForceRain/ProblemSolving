#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int tst,loop,val,sum=0;
	scanf("%d",&tst);

	for (int i=0;i<tst;i++)
	{
		sum=0;
		scanf("%d",&loop);
		for (int j=0;j<loop;j++)
		{
			scanf("%d",&val);
			sum+=val;
		}
		if (sum==0)
			printf("Equilibrium\n");
		else if (sum<0)
			printf("Left\n");
		else
			printf("Right\n");
	}

	return 0;
}
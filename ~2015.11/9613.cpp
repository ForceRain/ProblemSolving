#include <iostream>
#include <cstdio>

using namespace std;

int num_list[101];

int get_gcd(int a,int b)
{
	if (b==0)
		return a;
	else
		get_gcd(b,a%b);
}

int main(void)
{
	int tst;
	scanf("%d",&tst);
	int lp;
	unsigned long long summation=0;
	for (int i=0;i<tst;i++)
	{
		summation=0;
		scanf("%d",&lp);
		for (int j=0;j<lp;j++)
			scanf("%d",&num_list[j]);

		for (int j=0;j<lp;j++)
		{
			for (int k=j+1;k<lp;k++)
				summation+=get_gcd(num_list[j],num_list[k]);
		}
		printf("%llu\n",summation);
	}

	return 0;
}
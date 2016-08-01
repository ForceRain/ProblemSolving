#include <iostream>
#include <cmath>
#include <cstdio>

int space[1000001];

int main(void)
{
	for (int i=1;i<1000001;i++)
		space[i]=1;

	space[1]=0;
	int limitation=sqrt(1000001);
	for (int j=2;j<=limitation;j++)
	{
		if (space[j]!=0)
		{
			for (int k=2*j;k<1000001;k+=j)
				space[k]=0;
		}
	}

	int num;
	while (true)
	{
		scanf("%d",&num);
		if (num==0)
			break;

		int limi=num*2;
		int counting=0;
		for (int i=num+1;i<=limi;i++)
		{
			if (space[i]==1)
				counting++;
		}
		printf("%d\n",counting);
	}
	return 0;
}
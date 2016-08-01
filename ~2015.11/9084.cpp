#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int value_space[10001];
int coin_value[21];

int main(void)
{
	int test,coin_num,ob;
	scanf("%d",&test);

	for (int i=0;i<test;i++)
	{
		int c_sum=0;
		memset(value_space,0,sizeof(value_space));
		scanf("%d",&coin_num);
		for (int j=0;j<coin_num;j++)
			scanf("%d",&coin_value[j]);
		scanf("%d",&ob);

		value_space[0]=1;
		for (int j=0;j<coin_num;j++)
		{
			for (int k=1;k<=ob;k++)
			{
				if ( (k-coin_value[j]>=0) && (value_space[k-coin_value[j]]>0) )
					value_space[k]+=value_space[k-coin_value[j]];
			}
		//	value_space[j]=c_sum;
		}
		printf("%d\n",value_space[ob]);
	}
	
	return 0;
}
#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int temp;
	int king[3][4]={0};
	int i,j,max,max_index,same=0,pass=0;
	for (i=0;i<N;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&temp);
			king[j][temp]++;
		}
	}
	for (j=0;j<3;j++)
	{
		king[j][0]=king[j][1]*1+king[j][2]*2+king[j][3]*3;
	}
	max=king[0][0];
	max_index=0;
	for (i=0;i<3;i++)
	{
		if (max<king[i][0])
		{
			max=king[i][0];
			max_index=i;
		}
	}
	for (i=0;i<3;i++)
	{
		if (max==king[i][0] &&max_index!=i)
		{
			if (king[max_index][3]<king[i][3])
				max_index=i;
			else if (king[max_index][3]==king[i][3] && king[max_index][2]<king[i][2])
				max_index=i;
			else if (king[max_index][3]==king[i][3] && king[max_index][2]==king[i][2])
				max_index=0;
		}
	}
	printf("%d %d",max_index+1,max);
	return 0;
}

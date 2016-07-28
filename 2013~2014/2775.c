#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int i,j,k,floor,num;
	int ans[N][2];
	int result[15][14]={0};
	for (i=0;i<15;i++)
	{
		for (j=0;j<14;j++)
		{
			if (i==0)
				result[i][j]=j+1;
			else if (j==0)
				result[i][j]=result[i-1][j];
			else
			{
				k=0;
				while(k!=(j+1))
				{
					result[i][j]+=result[i-1][k];
					k++;
				}
			}
		}
	}
	for (k=0;k<N;k++)
	{
		scanf("%d",&ans[k][0]);
		scanf("%d",&ans[k][1]);
	}
	for (k=0;k<N;k++)
		printf("%d\n",result[ans[k][0]][ans[k][1]-1]);
	return 0;
}

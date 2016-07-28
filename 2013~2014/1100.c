#include <stdio.h>
int main(void)
{
	char chess[8][8];
	int i,j,w_cnt=0;
	for (i=0;i<8;i++)
	{
		scanf("%s",chess[i]);
	}
	for (i=0;i<8;i++)
	{
		for (j=0;j<8;j++)
		{
			if ((i+j)%2==0 && chess[i][j]=='F')
				w_cnt++;
		}
	}
	printf("%d",w_cnt);
	return 0;
}

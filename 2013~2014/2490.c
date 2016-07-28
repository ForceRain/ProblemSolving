#include <stdio.h>
int main(void)
{
	int i,j,temp;
	int sum[3]={0};
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			scanf("%d",&temp);
			sum[i]+=temp;
		}
	}
	for (i=0;i<3;i++)
	{
		switch (sum[i])
		{
			case 4 :
				printf("E\n");
				break;
			case 3 :
				printf("A\n");
				break;
			case 2 :
				printf("B\n");
				break;
			case 1 :
				printf("C\n");
				break;
			default :
				printf("D\n");
				break;
		}
	}
	return 0;
}

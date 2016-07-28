#include <stdio.h>
int main(void)
{
	int arr[9][9];
	int i,j,max=0,x,y;
	for (i=0;i<9;i++)
	{
		for (j=0;j<9;j++)
		{
			scanf("%d",&arr[i][j]);
			if (max<arr[i][j])
			{
				x=i;
				y=j;
				max=arr[i][j];
			}
		}
	}
	printf("%d\n%d %d",max,x,y);
	return 0;
}

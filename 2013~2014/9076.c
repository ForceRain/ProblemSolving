#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int i,j,tmp,k,one,two;
	int arr[N][5];
	for (i=0;i<N;i++)
	{
		for (j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for (k=0;k<N;k++)
	{
		for (i=0;i<5-1;i++)
		{
			for (j=5-1;j>i;j--)
			{
				if (arr[k][j-1]>arr[k][j])
				{
					tmp=arr[k][j-1];
					arr[k][j-1]=arr[k][j];
					arr[k][j]=tmp;
				}
			}
		}
		one=arr[k][1]-arr[k][3];
		two=arr[k][3]-arr[k][1];
		if ((-4<one && one<4) || (-4<two && two<4))
			printf("%d\n",arr[k][1]+arr[k][2]+arr[k][3]);
		else
			printf("KIN\n");
	}
	return 0;
}

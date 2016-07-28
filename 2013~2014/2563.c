#include <stdio.h>
int main(void)
{
	int arr[100][100]={0};
	int N;
	scanf("%d",&N);
	int i,j,k,a,b,cnt=0;
	for (i=0;i<N;i++)
	{
		scanf("%d %d",&a,&b);
		for (j=b-1;j<b+9;j++)
		{
			for (k=a-1;k<a+9;k++)
			{
				if (arr[j][k]==0)
					arr[j][k]=-1;
			}
		}
	}
	for (i=0;i<100;i++)
	{
		for (j=0;j<100;j++)
		{
			if (arr[i][j]==-1)
				cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}

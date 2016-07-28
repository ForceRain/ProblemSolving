#include <stdio.h>
void color(int arr[100][100],int x,int y)
{
	int i,j;
	for (i=x-1;i<x-1+10;i++)
	{
		for (j=y-1;j<y+10;j++)
		{
			arr[i][j]=1;
		}
	}
}
int check(int arr[100][100])
{
	int cnt=0;
	int i,j;
	for (i=0;i<100;i++)
	{
		for (j=0;j<100;j++)
		{
			if (arr[i][j]==1 && ((arr[i][j+1]+arr[i][j-1]+arr[i-1][j]+arr[i+1][j])!=4))
				cnt++;
		}
	}
	return cnt;
}
int main(void)
{
	int arr[100][100]={0};
	int N;
	scanf("%d",&N);
	int i,dool;
	for (i=0;i<N;i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		color(arr,x,y);
	}
	printf("%d",check(arr));
	return 0;
}


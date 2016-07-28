#include <stdio.h>
#include <string.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int i,j,k,num;
	int arr[N];
	char input[N][20];
	char ans[N][200];
	for (i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
		scanf("%s",input[i]);
	}
	for (i=0;i<N;i++)
	{
		num=0;
		for (k=0;input[i][k]!='\0';k++)
		{
			for (j=0;j<arr[i];j++,num++)
				ans[i][num]=input[i][k];
		}
		printf("%s\n",ans[i]);
	}
	return 0;
}

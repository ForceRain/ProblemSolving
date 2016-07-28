#include <stdio.h>
#include <string.h>
int main(void)
{
	int N,i,temp;
	scanf("%d",&N);
	char arr[1000];
	int ans[N];
	for (i=0;i<N;i++)
	{
		scanf("%s",arr);
		temp=strlen(arr);
		if (arr[temp/2]==arr[temp/2-1])
			ans[i]=1;
		else
			ans[i]=0;
	}
	for (i=0;i<N;i++)
	{
		if (ans[i]==1)
			printf("Do-it\n");
		else
			printf("Do-it-not\n");
	}
	return 0;
}

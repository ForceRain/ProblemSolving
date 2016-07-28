#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int i,j,cnt=0,div=1,out=0;
	int arr[N];
	for (i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	while (1)
	{
		cnt=0;
		for (i=0;i<N;i++)
		{
			if (arr[i]%div==0)
				cnt++;
		}
		if (cnt==N)
			printf("%d\n",div);
		div++;
		for (i=0;i<N;i++)
		{
			if (arr[i]<div)
				out=1;
		}
		if (out!=0)
			break;
	}
	return 0;
}

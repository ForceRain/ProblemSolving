#include <stdio.h>
int main(void)
{
	int N,len1,len2;
	scanf("%d %d %d",&N,&len1,&len2);
	int i,tmp;
	int arr[N];
	for (i=0;i<N;i++)
	{
		scanf("%d",&tmp);
		if (tmp<=len1 || tmp<=len2 || tmp*tmp<=len1*len1+len2*len2)
			arr[i]=-1;
		else
			arr[i]=0;
	}
	for (i=0;i<N;i++)
	{
		if (arr[i]==-1)
			printf("DA\n");
		else
			printf("NE\n");
	}
	return 0;
}

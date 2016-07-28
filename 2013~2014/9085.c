#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int ans[N];
	int i,j,k,temp;
	for (k=0;k<N;k++)
	{
		ans[k]=0;
		scanf("%d",&i);
		for (j=0;j<i;j++)
		{
			scanf("%d",&temp);
			ans[k]+=temp;
		}
	}
	for (k=0;k<N;k++)
		printf("%d\n",ans[k]);
	return 0;
}

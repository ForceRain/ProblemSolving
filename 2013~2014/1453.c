#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int comp[100]={0};
	int i,tmp,sad=0;
	for (i=0;i<N;i++)
	{
		scanf("%d",&tmp);
		if (comp[tmp-1]==0)
			comp[tmp-1]++;
		else
			sad++;
	}
	printf("%d",sad);
	return 0;
}

#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int per,jari,i,j,tmp,no=0;
	int ans[N];
	for (i=0;i<N;i++)
	{
		no=0;
		scanf("%d %d",&per,&jari);
		int table[jari];
		for (j=0;j<jari;j++)
			table[j]=0;
		for (j=0;j<per;j++)
		{
			scanf("%d",&tmp);
			if (table[tmp-1]==0)
				table[tmp-1]=1;
			else
				no++;
		}
		ans[i]=no;
	}
	for (i=0;i<N;i++)
		printf("%d\n",ans[i]);
	return 0;
}

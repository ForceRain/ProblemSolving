#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int i;
	int ans[N],tmp,max;
	for (i=0;i<N;i++)
	{
		scanf("%d",&tmp);
		max=tmp;
		while(1)
		{
			if (tmp==1)
				break;
			if ((tmp%2)==0)
				tmp=tmp/2;
			else
				tmp=tmp*3+1;
			if (max<tmp)
				max=tmp;
		}
		ans[i]=max;
	}
	for (i=0;i<N;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}

#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int i,j,tmp,ruler,cnt;
	int ans[N];
	for (i=0;i<N;i++)
	{
		int arr[10]={0};
		cnt=0;
		ruler=1000000000;
		scanf("%d",&tmp);
		while (ruler>tmp)
		{
			ruler/=10;
		}
		while (ruler)
		{
			arr[tmp/ruler]++;
			tmp%=ruler;
			ruler/=10;
		}
		for (j=0;j<10;j++)
		{
			if (arr[j]!=0)
				cnt++;
		}
		ans[i]=cnt;
	}
	for (i=0;i<N;i++)
		printf("%d\n",ans[i]);
	return 0;
}

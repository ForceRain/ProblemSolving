#include <cstdio>

int scalar[100000];
int ans[100000];

int give_max(int a,int b)
{
	return (a>b)?a:b;
}

int main(void)
{
	int N,i,j,m_cnt=1;
	scanf("%d",&N);

	for (i=0;i<N;i++)
		scanf("%d",&scalar[i]);

	int carry=scalar[0];
	ans[0]=scalar[0];
	for (i=1;i<N;i++)
	{
		if (scalar[i]>0)
		{
			ans[i]=ans[i-1]+scalar[i];
		}
		else
		{
			m_cnt++;
			ans[i]=0;
		}
	}

	//for (i=0;i<N;i++)
	//	printf("%d ",ans[i]);

	int maximum=-1;
	for (i=0;i<N;i++)
	{
		if (maximum<ans[i])
			maximum=ans[i];
	}

	int sum=0;
	if (m_cnt!=N)
		printf("%d\n",maximum);
	else
	{
		for (i=0;i<N;i++)
		{
			sum+=scalar[i];
		}
		printf("%d\n",sum);
	}

	return 0;
}
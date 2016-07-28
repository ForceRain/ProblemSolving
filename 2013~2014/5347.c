#include <stdio.h>
unsigned long long e_al(unsigned long long a,unsigned long long b)
{
	unsigned tmp,out=1;
	while (1)
	{
		if (b==0)
		{
			out=a;
			break;
		}
		else
		{
			tmp=a;
			a=b;
			b=tmp%b;
		}
	}
	return out;
}
int main(void)
{
	int N;
	scanf("%d",&N);
	int i,j;
	unsigned long long a,b;
	unsigned long long tmp1;
	unsigned long long arr[N];
	for (i=0;i<N;i++)
	{
		scanf("%llu %llu",&a,&b);
		tmp1=e_al(a,b);
		arr[i]=tmp1*(a/tmp1)*(b/tmp1);
	}
	for (i=0;i<N;i++)
		printf("%llu\n",arr[i]);
	return 0;
}

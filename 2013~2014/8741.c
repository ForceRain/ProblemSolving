#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	unsigned i=1;
	unsigned long long result,sum=0,cnt=0,mask=1;
	result=(i<<N)-1;
	for (i=1;i<=result;i++)
	{
		sum+=i;
	}
	result=1;
	while (1)
	{
		if (sum<result)
			break;
		result=result<<1;
		cnt++;
	}
	mask=mask<<(cnt-1);
	for (i=0;i<cnt;i++)
	{
		printf("%d",((mask & sum)==mask)?1:0);
		mask=mask>>1;
	}
	return 0;
}

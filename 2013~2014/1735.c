#include <stdio.h>
#include <time.h>
unsigned long long e_al(unsigned long long a,unsigned long long b)
{
	int tmp,out=1;
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
	int i,div=1;
	unsigned long long head,bot;
	unsigned long long max;
	unsigned long long arr[2][2];
	clock_t start,end;
	start=clock();
	for (i=0;i<2;i++)
	{
		scanf("%llu %llu",&arr[i][0],&arr[i][1]);
	}
	head=(arr[0][1]*arr[1][0]+arr[0][0]*arr[1][1]);
	bot=arr[0][1]*arr[1][1];
	max=e_al(head,bot);
	printf("%llu %llu",head/max,bot/max);
	end=clock();
	time_checker(start,end);
	return 0;
}

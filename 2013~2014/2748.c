#include <stdio.h>
int main(void)
{
	unsigned long long f1=0,f2=1,f3;
	int N;
	scanf("%d",&N);
	int i;
	if (N==0)
		f3=f1;
	else if (N==1)
		f3=f2;
	else
	{
		for (i=1;i<N;i++)
		{
			f3=f1+f2;
			f1=f2;
			f2=f3;
		}
	}
	printf("%llu",f3);
	return 0;
}

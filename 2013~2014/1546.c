#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	if (N==0)
		return 0;
	int result[N];
	int i,max;
	double aver,sum=0.0;
	for (i=0;i<N;i++)
	{
		scanf("%d",&result[i]);
	}
	max=result[0];
	for (i=0;i<N;i++)
	{
		if (max<result[i])
			max=result[i];
	}
	for (i=0;i<N;i++)
	{
		sum+=((double)result[i]/max)*100;   
	}
	aver=sum/N;
	printf("%.2lf",aver);
	return 0;
}

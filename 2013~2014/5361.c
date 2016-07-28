#include <stdio.h>
int main(void)
{
	int N,a,b,c,d,e;
	scanf("%d",&N);
	double ans[N];
	int i;
	for (i=0;i<N;i++)
	{
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
		ans[i]=a*350.34+b*230.90+c*190.55+d*125.30+e*180.90;
	}
	for (i=0;i<N;i++)
		printf("$%.2lf\n",ans[i]);
	return 0;
}

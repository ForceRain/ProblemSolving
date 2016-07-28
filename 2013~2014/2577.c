#include <stdio.h>
int main(void)
{
	int A,B,C;
	int i=1,count=0,j;
	int num[10]={0};
	unsigned gop;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	gop=A*B*C;
	while(i<gop)
	{
		i*=10;
		count++;
	}
	i/=10;
	for (j=0;j<count;j++)
	{
		num[(gop/i)]++;
		gop=gop%i;
		i/=10;
	}
	for (j=0;j<10;j++)
	{
		printf("%d\n",num[j]);
	}
	return 0;
}

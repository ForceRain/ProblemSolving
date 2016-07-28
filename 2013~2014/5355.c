#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	double arr[N];
	int i;
	double in;
	char a;
	for (i=0;i<N;i++)
	{
		scanf("%lf",&in);
		while(1)
		{
			scanf("%c",&a);
			if (a=='@')
				in*=3;
			if (a=='%')
				in+=5;
			if (a=='#')
				in-=7;
			if (a=='\n')
				break;
		}
		arr[i]=in;
	}
	for (i=0;i<N;i++)
	{
		printf("%.2lf\n",arr[i]);
	}
	return 0;
}

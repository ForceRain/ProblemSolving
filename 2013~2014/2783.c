#include <stdio.h>

int main(void)
{
	int s25g,s25pr;
	scanf("%d %d",&s25pr,&s25g);
	int N;
	scanf("%d",&N);
	int i;
	int pr,g;
	int min_pr=s25pr,min_g=s25g;
	for (i=0;i<N;i++)
	{
		scanf("%d %d",&pr,&g);
		if (((min_pr)/(min_g))<((pr)/(g)))
		{
			min_pr=pr;
			min_g=g;
		}
	}
	printf("%.2lf",(1000.0/min_g)*min_pr);
	return 0;
}

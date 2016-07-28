#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,N;
	char input[10];
	scanf("%d",&N);
	int a=0,b=0,c=0;
	int total=0;

	for (i=0;i<N;i++)
	{
		scanf("%s",input);
		if (strcmp(input,"1/4")==0)
			a++;
		if (strcmp(input,"1/2")==0)
			b++;
		if (strcmp(input,"3/4")==0)
			c++;
	}

	while ((a>0) && (c>0))
	{
		total++;
		a--;c--;
	}

	while (b>1)
	{
		total++;
		b-=2;
	}

	if (a!=0)
	{
		if (a%4==0)
			total+=(a/4);
		else
			total+=(a/4)+1;
	}

	if (b!=0)
	{
		//if (b%2==0)
		total+=(b/2)+1;
	}

	if (c!=0)
	{
		total+=c;
	}

	printf("%d\n",total);

	return 0;
}

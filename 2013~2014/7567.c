#include <stdio.h>
int main(void)
{
	char input[30];
	int sum=0,i;
	scanf("%s",input);
	i=0;
	while (input[i]!='\0')
	{
		if (i==0)
		{
			sum+=10;
			i++;
		}
		else
		{
			if (input[i]==input[i-1])
				sum+=5;
			else
				sum+=10;
			i++;
		}
	}
	printf("%d",sum);
	return 0;
}

#include <stdio.h>
int main(void)
{
	char input[1000];
	int i=0,j=0;
	char out[1001];
	scanf("%s",input);
	while (input[i]!='\0')
	{
		if ('A'<=input[i] && input[i]<='Z')
		{
			out[j]=input[i];
			j++;
		}
		i++;
	}
	out[j+1]='\0';
	printf("%s",out);
	return 0;
}

#include <stdio.h>
int main(void)
{
	char input[100];
	scanf("%s",input);
	int j;
	for (j=0;input[j];j++)
	{
		if (!(input[j]=='C' || input[j]=='A' || input[j]=='M' || input[j]=='B' || input[j]=='R' || input[j]=='I' || input[j]=='D' || input[j]=='G' || input[j]=='E'))
			printf("%c",input[j]);
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	int JOI=0,IOI=0;
	char input[10000];
	scanf("%s",input);
	int i,len;
	len=strlen(input);
	for (i=0;i<len-2;i++)
	{
		if (input[i]=='I' && input[i+1]=='O' && input[i+2]=='I')
			IOI++;
		if (input[i]=='J' && input[i+1]=='O' && input[i+2]=='I')
			JOI++;
	}
	printf("%d\n%d",JOI,IOI);
	return 0;
}

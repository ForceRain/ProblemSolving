#include <stdio.h>
#include <string.h>
int main(void)
{
	int N,tmp;
	scanf("%d",&N);
	char str[N][1000];
	int i;
	for (i=0;i<N;i++)
	{
		scanf("%s",str[i]);
	}
	for (i=0;i<N;i++)
	{
		tmp=strlen(str[i]);
		printf("%c%c\n",str[i][0],str[i][tmp-1]);
	}
	return 0;
}

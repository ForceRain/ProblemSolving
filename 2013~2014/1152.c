#include <stdio.h>
int main(void)
{
	int i=0,cnt=0;
	char arr[1000000];
	gets(arr);
	while(arr[i]!='\0')
	{
		if (arr[i]==' ')
			cnt++;
		i++;
	}
	printf("%d",cnt+1);
	return 0;
}

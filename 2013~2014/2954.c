#include <stdio.h>
int main(void)
{
	char input[100];
	int hwk[5]={'a','e','i','o','u'};
	gets(input);
	int i=0,j;
	int check;
	while(input[i]!='\0')
	{
		check=0;
		j=0;
		for (j=0;j<5;j++)
		{
			if (i>0)
			{
				if (hwk[j]==input[i-1] && input[i]=='p')
				{
					check++;
					i++;
				}
			}
		}
		if (!check)
			printf("%c",input[i]);
		i++;
	}
	return 0;
}

#include <stdio.h>
int main(void)
{
	char input[1000000];
	scanf("%s",input);
	int alpha[26]={0};
	int i=0,max,max_index,no=0;
	while(input[i]!='\0')
	{
		if (input[i]>'Z')
			alpha[input[i]-97]++;
		else
			alpha[input[i]-65]++;
		i++;
	}
	max=alpha[0];
	max_index=0;
	for (i=1;i<26;i++)
	{
		if (max<alpha[i])
		{
			max=alpha[i];
			max_index=i;
			continue;
		}
	}
	for (i=0;i<26;i++)
	{
		if (max==alpha[i])
			no++;
	}
	for (i=0;i<26;i++)
	{
		printf("%c = %d개\n",i+65,alpha[i]);
	}
	if (no==1)
		printf("%c",max_index+65);
	else
		printf("?");
	return 0;
}

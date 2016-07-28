#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[35];
	char str2[35];

	scanf("%s %s",str1,str2);

	int i,j,out=1;
	int len1=strlen(str1);
	int len2=strlen(str2);
	int ansx;
	int ansy;

	for (j=0;j<len2 && out!=0;j++)
	{
		for (i=0;i<len1;i++)
		{
			if (str2[j]==str1[i])
			{
				out=0;
				break;
			}
		}
	}
	ansx=i;
	ansy=j-1;

	char ans[len2][len1];
	for (j=0;j<len2;j++)
	{
		for (i=0;i<len1;i++)
			ans[j][i]='.';
	}

	for (i=0;i<len1;i++)
		ans[ansy][i]=str1[i];

	for (j=0;j<len2;j++)
		ans[j][ansx]=str2[j];

	for (j=0;j<len2;j++)
	{
		for (i=0;i<len1;i++)
			printf("%c",ans[j][i]);
		printf("\n");
	}

	return 0;
}

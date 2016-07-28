#include <stdio.h>
#include <string.h>

char file[1001];
char result[1001];

int main(void)
{
	int N;
	scanf("%d",&N);

	scanf("%s",file);
	scanf("%s",result);

	int length=strlen(file);
	
	int i;
	int no=0;
	
	if (N%2)
	{
		for (i=0;i<length;i++)
		{
			if ((file[i]-'0')^(result[i]-'0')!=1)
			{
				no=1;
				break;
			}
		}
	}
	else
	{
		for (i=0;i<length;i++)
		{
			if (file[i]-result[i]!=0)
			{
				no=1;
				break;
			}		
		}
	}

	if (no==0)
		printf("Deletion succeeded\n");
	else
		printf("Deletion failed\n");

	return 0;
}

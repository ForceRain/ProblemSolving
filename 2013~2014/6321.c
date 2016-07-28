#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	char arr[N][100];
	int i,j;
	for (i=0;i<N;i++)
	{
		scanf("%s",arr[i]);
	}
	for (i=0;i<N;i++)
	{
		j=0;
		printf("String #%d\n",i+1);
		while (arr[i][j]!='\0')
		{
			if (arr[i][j]+1>'Z')
				printf("%c",'A');
			else
				printf("%c",arr[i][j]+1);
			j++;
		}
		printf("\n\n");
	}
	return 0;
}

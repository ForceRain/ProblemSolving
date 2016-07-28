#include <stdio.h>
int main(void)
{
	int arr[129]={0};
	char input[50];
	int N,i,j;
	scanf("%d",&N);
	for (i=0;i<N;i++)
	{
		scanf("%s",input);
		for (j=0;input[j]!='\0';j++)
		{
			arr[input[j]]++;
		}
	}
	for (j=0;input[j]!='\0';j++)
	{
		if (arr[input[j]]==N)
			printf("%c",input[j]);
		else
			printf("?");
	}
	return 0;
}

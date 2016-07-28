#include <stdio.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	getchar();
	int i,j;
	char in_arr[27];
	char ques[1000];
	char ans[N][1000];
	for (i=0;i<N;i++)
	{
		j=0;
		gets(ques);
		getchar();
		gets(in_arr);
		while (ques[j]!='\0')
		{
			if (ques[j]==' ')
				ans[i][j]=' ';
			else
				ans[i][j]=in_arr[ques[j]-'A'];
			j++;
		}
		ans[i][j]='\0';
		getchar();
	}
	for (i=0;i<N;i++)
		puts(ans[i]);
	return 0;
}

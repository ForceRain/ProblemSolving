#include <iostream>
#include <cstdio>

using namespace std;

char input_buf[100];
char input_space[100][100];
char output_space[100][100];

int main(void)
{
	int N,M,lim;
	scanf("%d%d",&N,&M);
	lim=2*M;
	for (int i=0;i<N;i++)
	{
		scanf("%s",input_buf);
		for (int j=0;j<lim;j++)
			output_space[i][j]=input_buf[j/2];
	}
	for (int i=0;i<N;i++)
		scanf("%s",input_space[i]);
	bool fine=true;
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<lim;j++)
			if (output_space[i][j]!=input_space[i][j])
				fine=false;
	}
	if (fine)	printf("Eyfa\n");
	else	printf("Not Eyfa\n");

	return 0;
}
#include <stdio.h>
#include <string.h>
struct wow{
	char name[20];
	char status[20];
	int data;
};
int main(void)
{
	int N;
	scanf("%d",&N);
	struct wow profile[N];
	char temp[20];
	int i,j;
	for (i=0;i<N;i++)
	{
		scanf("%s %s",profile[i].name,profile[i].status);
	}
	for (i=0;i<N;i++)
	{
		if (strcmp(profile[i].status,"enter")==0)
			profile[i].data=1;
		if (strcmp(profile[i].status,"leave")==0)
			profile[i].data=0;
	}
	for (i=0;i<N-1;i++)
	{
		for (j=N-1;j>i;j--)
		{
			if (strcmp(profile[j-1].name,profile[j].name)<0)
			{
				strcpy(temp,profile[j-1].name);
				strcpy(profile[j-1].name,profile[j].name);
				strcpy(profile[j].name,temp);
			}
		}
	}
	for (i=0;i<N;i++)
	{
		if (profile[i].data==1)
			printf("%s\n",profile[i].name);
	}
	return 0;
}

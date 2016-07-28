#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(void)
{
	int N;
	struct node *new,*head=NULL,*bef;
	new=(struct node *)malloc(sizeof(struct node));
	if (head==NULL)
		head=new;
	while (1)
	{
		N=getchar();
		if (N==0)
		{
			bef->next=NULL;
			break;
		}
		char arr[N][100];
		int i,index=0,j=0;
		for (i=0;i<N;i++)
		{
			gets(arr[i]);
		}
		for (i=0;i<N;i++)
		{
			for (j=index;j<100;j++)
			{
				if (arr[i][j]==' ')
				{
					index=j;
					break;
				}
			}
		}
		new->data=index+1;
		new->next=(struct node *)malloc(sizeof(struct node));
		bef=new;
		new=new->next;
	}
	for (;head;head=head->next)
		printf("%d\n",head->data);
	return 0;
}

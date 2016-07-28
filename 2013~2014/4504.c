#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	int yes;
	struct _node *next;
}Node;

int main(void)
{
	int N,tmp_data;
	Node *start=NULL,*tmp,*bef;
	scanf("%d",&N);

	while (1)
	{
		scanf("%d",&tmp_data);
		if (tmp_data==0)
			break;

		tmp=(Node *)malloc(sizeof(Node));
		tmp->data=tmp_data;
		tmp->next=NULL;
		if (tmp_data%N==0)
			tmp->yes=1;
		else
			tmp->yes=0;

		if (start==NULL)
		{
			start=tmp;
			bef=start;
		}
		else
		{
			bef->next=tmp;
			bef=tmp;
		}
	}

	for (tmp=start;tmp;tmp=tmp->next)
	{
		if (tmp->yes)
			printf("%d is a multiple of %d.\n",tmp->data,N);
		else
			printf("%d is NOT a multiple of %d.\n",tmp->data,N);
	}

	return 0;
}

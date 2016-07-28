#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main(void)
{
	struct node *new,*head=NULL,*bef,*tmp,*tmp1;
	new=(struct node *)malloc(sizeof(struct node));
	head=new;
	int i,N,term,cnt=0;
	scanf("%d %d",&N,&term);
	for (i=0;i<N;i++)
	{
		new->data=i+1;
		new->next=(struct node *)malloc(sizeof(struct node));
		bef=new;
		new=new->next;
	}
	
	struct node *tt=head;
	for (;tt;tt=tt->next)
	{
		printf("%d \n",tt->data);
	}
	printf("ee");

	bef->next=head;
	tmp=bef;
		
	printf("<");
	while (1)
	{
		for (i=0;i<term;i++)
		{
			tmp=tmp->next;
		}
		while (tmp->data==-1)
			tmp=tmp->next;

		printf("%d, ",tmp->data);
		tmp->data=-1;
		cnt++;

		if (cnt==N)
			break;
	}
	printf("\b\b>");
	return 0;
}


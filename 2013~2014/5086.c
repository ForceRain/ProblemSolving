#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(void)
{
	int a,b,i,n;
	struct node *Nnode,*head;
	Nnode=(struct node *)malloc(sizeof(struct node));
	head=Nnode;
	scanf("%d %d",&a,&b);
	while (1)
	{
		if (a==0 && b==0)
			break;
		if (a%b==0)
			Nnode->data=2;
		else if (b%a==0)
			Nnode->data=1;
		else
			Nnode->data=0;
		scanf("%d %d",&a,&b);
		if (a==0 && b==0)
			break;
		Nnode->next=(struct node *)malloc(sizeof(struct node));
		Nnode=Nnode->next;
	}
	for(;head;head=head->next)
	{
		if (head->data==2)
			printf("multiple\n");
		else if (head->data==1)
			printf("factor\n");
		else
			printf("neither\n");
	}
	return 0;
}

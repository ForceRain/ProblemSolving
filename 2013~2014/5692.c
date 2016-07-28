#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main(void)
{
	int arr[5]={1};
	int i,j,tmp,ruler,sum;
	struct node *new,*head;
	new=(struct node *)malloc(sizeof(struct node));
	head=new;
	for (i=1;i<5;i++)
	{
		arr[i]=arr[i-1]*(i+1);
	}
	while (1)
	{
		ruler=10000;
		sum=0;
		scanf("%d",&tmp);
		if (tmp==0)
		{
			new=NULL;
			break;
		}
		for (i=0;i<5;i++)
		{
			sum+=(tmp/ruler)*arr[4-i];
			tmp%=ruler;
			ruler/=10;
		}
		new->data=sum;
		new->next=(struct node *)malloc(sizeof(struct node));
		new=new->next;
	}
	while (1)
	{
		if (head->next==NULL)
			break;
		else
		{
			printf("%d\n",head->data);
			head=head->next;
		}
	}
	return 0;
}

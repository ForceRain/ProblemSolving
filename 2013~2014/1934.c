#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(void)
{
	int N;
	struct node *head=NULL,*new=NULL,*cur=NULL;
	scanf("%d",&N);
	int a,b,n=1,max;
	while(N--)
	{
		n=1;
		scanf("%d %d",&a,&b);
		while (1)
		{
			if ((a%n)==0 && (b%n)==0)
				max=n;
			if (a<n || b<n)
				break;
			else
				n++;
		}
		new=(struct node *)malloc(sizeof(struct node));
		new->data=(a/max)*(b/max)*max;
		if (head==NULL)
		{
			head=new;
			cur=new;
		}
		else
		{
			cur->next=new;
			cur=new;
		}
	}
	new->next=NULL;
	for (;head;head=head->next)
		printf("%d\n",head->data);
	return 0;
}

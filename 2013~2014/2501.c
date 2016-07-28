#include <stdio.h>
#include <stdlib.h>
struct list{
	int data;
	struct list *next;
};
int main(void)
{
	struct list *node, *head;
	int i,j,num,count,yak=0;
	scanf("%d %d",&num,&count);
	node=(struct list *)malloc(sizeof(struct list));
	head=node;
	for (i=1;i<=num;i++)
	{
		if ((num%i)==0)
		{
			node->data=i;
			node->next=(struct list *)malloc(sizeof(struct list));
			node=node->next;
			yak++;
		}
	}
	node=head;
	if (yak<count)
		printf("0");
	else
	{
		count--;
		for (;node;node=node->next)
		{
			if (count==0)
			{
				printf("%d",node->data);
			}
			count--;
		}
	}
	return 0;
}

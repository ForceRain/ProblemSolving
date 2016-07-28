#include <stdio.h>
#include <stdlib.h>
struct link{
	double data;
	struct link *next;
};
int main(void)
{
	double a,b;
	scanf("%lf",&a);
	struct link *head;
	struct link *node=(struct link *)malloc(sizeof(struct link));
	scanf("%lf",&b);
	node->data=b-a;
	a=b;
	head=node;
	while (1)
	{
		scanf("%lf",&b);    
		if (b==999)
			break;
		node->next=(struct link *)malloc(sizeof(struct link));
		node=node->next;
		node->data=b-a;
		a=b;    
		node->next=NULL;
	}
	for (;head;head=head->next)
		printf("%.2lf\n",head->data);
	return 0;
}

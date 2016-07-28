#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct result{
	char res[10];
	struct result *next;
};
int main(void)
{
	struct result *node,*head;
	int num1,num2;
	head=(struct result *)malloc(sizeof(struct result));
	node=head;
	while(1)
	{
		scanf("%d %d",&num1,&num2);
		if (num1==0 && num2==0)
		{
			node=NULL;
			break;
		}
		if (num1>num2)
			strcpy(node->res,"Yes");
		else
			strcpy(node->res,"No");
		node->next=(struct result *)malloc(sizeof(struct result));
		node=node->next;
	}
	node=head;
	for (;node;node=node->next)
		printf("%s\n",node->res);
	return 0;
}

#include <stdio.h>

int main(void)
{
	int input;
	int i=0;
	while (1)
	{
		i++;
		scanf("%d",&input);
		if (input==0)
			break;
		if ((input%2)==1)
			printf("%d. odd %d\n",i,(input-1)/2);
		else
			printf("%d. even %d\n",i,input/2);
	}
	return 0;
}

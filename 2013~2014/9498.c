#include <stdio.h>
int main(void)
{
	int input;
	scanf("%d",&input);
	if (input>=90)
		printf("A");
	else if (80<=input && input<90)
		printf("B");
	else if (70<=input && input<80)
		printf("C");
	else if (60<=input && input<70)
		printf("D");
	else
		printf("F");
	return 0;
}

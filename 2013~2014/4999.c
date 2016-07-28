#include <stdio.h>
#include <string.h>
int main(void)
{
	char p_aah[1000];
	char d_aah[1000];
	scanf("%s",p_aah);
	scanf("%s",d_aah);
	if (strlen(p_aah)>=strlen(d_aah))
		printf("go");
	else
		printf("no");
	return 0;
}

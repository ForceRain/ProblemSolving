#include <stdio.h>
#include <string.h>
int main(void)
{
	int gap[10]={0,1,2,3,4,5,6,7,8,9};
	int times[10]={1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
	char *name[10]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
	char temp[10];
	int i,j;
	unsigned long long hop=0;
	for (i=0;i<3;i++)
	{
		scanf("%s",temp);
		for (j=0;j<10;j++)
		{
			if (strcmp(temp,name[j])==0 && i==0)
			{
				hop+=gap[j]*10;
				break;
			}
			if (strcmp(temp,name[j])==0 && i==1)
			{
				hop+=gap[j];
				break;
			}
			if (strcmp(temp,name[j])==0 && i==2)
			{
				hop=hop*times[j];
				break;
			}
		}
	}
	printf("%llu",hop);
	return 0;
}

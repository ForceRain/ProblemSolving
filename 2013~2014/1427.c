#include <stdio.h>
#include <string.h>
int main(void)
{
	int N;
	scanf("%d",&N);
	int ruler=1,num=0,i,j;
	long ans;
	char tmp,*stop=NULL;
	while (1)
	{
		if (ruler>N)
		{
			ruler/=10;
			break;
		}
		ruler*=10;
		num++;
	}
	char arr[num+1];
	for (i=0;i<num;i++)
	{
		arr[i]=N/ruler;
		N=N%ruler;
		ruler/=10;
	}
	for (i=0;i<num-1;i++)
	{
		for (j=num-1;j>i;j--)
		{
			if (arr[j-1]<arr[j])
			{
				tmp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	arr[num]='\0';
	ans=strtol(arr,stop,10);
	printf("%ld",ans);
	return 0;
}

#include <stdio.h>
int main(void)
{
	int input,i;
	int ruler=1,tmp,cnt=0,max,hop=0;
	int arr[10]={0};
	scanf("%d",&input);
	while (1)
	{
		if (ruler>input)
		{
			ruler=ruler/10;
			break;
		}
		ruler*=10;
		cnt++;
	}
	while (cnt--)
	{
		tmp=input/ruler;
		arr[tmp]++;
		input=input%ruler;
		ruler/=10;
	}
	max=0;
	hop=arr[6]+arr[9];
	if ((hop%2)==1)
	{
		arr[6]=hop/2+1;
		arr[9]=hop/2+1;
	}
	else
	{
		arr[6]=hop/2;
		arr[9]=hop/2;
	}
	for (i=0;i<10;i++)
	{
		if (max<arr[i])
			max=arr[i];
	}
	printf("%d",max);
	return 0;
}

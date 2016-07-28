#include <stdio.h>
int main(void)
{
	int arr[10][2]={0};
	int i,temp,j=0,many,gap,sum=0;
	for (i=0;i<10;i++)
	{
		scanf("%d", &temp);
		sum+=temp;
		if (i==0)
		{
			arr[i][0]=temp;
			arr[i][1]++;
			continue;
		}
		for (j=0;j<10;j++)
		{
			if (arr[j][0]==temp)
				arr[j][1]++;
		}
		if (j==10)
		{
			arr[i][0]=temp;
			arr[i][1]++;
		}
	}
	many=arr[0][1];
	gap=arr[0][0];
	for (i=0;i<10;i++)
	{
		if (arr[i][1]>many)
		{
			gap=arr[i][0];
			many=arr[i][1];
		}
	}
	printf("%d\n%d",sum/10,gap);
	return 0;
}

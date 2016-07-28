#include <stdio.h>

int main(void)
{
	int N,i,j,max_index,sum;
	scanf("%d",&N);
	int arr[3];
	char ans[N];
	for (i=0;i<N;i++)
	{
		sum=0;
		max_index=0;
		scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
		for (j=0;j<3;j++)
		{
			if (arr[max_index]<arr[j])
			{
				max_index=j;
			}
		}
		for (j=0;j<3;j++)
		{
			if (arr[j]==arr[max_index])
				continue;
			sum+=arr[j]*arr[j];
		}

		if (sum==arr[max_index]*arr[max_index])
			ans[i]='Y';
		else
			ans[i]='N';
	}

	for (i=0;i<N;i++)
	{
		printf("Scenario #%d:\n",i+1);
		if (ans[i]=='Y')
			printf("yes\n\n");
		else
			printf("no\n\n");
	}

	return 0;
}

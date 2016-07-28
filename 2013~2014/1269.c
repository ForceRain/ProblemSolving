#include <stdio.h>
int main(void)
{
	int A,B;
	scanf("%d %d",&A,&B);
	int arr1[A];
	int arr2[B];
	int i,j;
	unsigned long long same_cnt=0;
	clock_t start,end;
	start=clock();
	/*for (i=0;i<A;i++)
		scanf("%d",&arr1[i]);
	for (i=0;i<B;i++)
		scanf("%d",&arr2[i]);*/
	for (i=0;i<A;i++)
	{
		for (j=0;j<B;j++)
		{
			if (arr1[i]==arr2[j])
				same_cnt++;
		}
	}
	end=clock();
	time_checker(start,end);
	printf("%lld",A-same_cnt+B-same_cnt);
	return 0;
}

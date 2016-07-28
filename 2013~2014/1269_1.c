#include <stdio.h>
int main(void)
{
	char arr[100000000]={0};
	int N,M;
	scanf("%d %d",&N,&M);
	int i,tmp,cnt=0;
	clock_t start,end;
	/*for (i=0;i<N+M;i++)
	{
		scanf("%d",&tmp);
		arr[tmp]++;    
	}*/
	start=clock();
	for (i=0;i<100000000;i++)
	{
		if (arr[i]==1)
			cnt++;
	}
	end=clock();
	time_checker(start,end);
	printf("%d",cnt);
	return 0;
}

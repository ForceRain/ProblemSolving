#include <stdio.h>
#include <stdlib.h>
int aarr[100010];
int barr[100010];
int cmp(int * n1, int * n2)
{
	return *n2 - *n1;
}
int main(void)
{
	freopen("test1.txt","r",stdin);
	int a, b;
	long long int sum= 1;
	int acub = 0;
	scanf("%d%d",&a,&b);
	for(int i= 0; i< a; i++)
		scanf("%d",aarr+i);
	for(int i= 0; i< b; i++)
		scanf("%d",barr+i);
	qsort(aarr,a,sizeof(int),(int(*)(const void *, const void *))cmp);
	qsort(barr,b,sizeof(int),(int(*)(const void *, const void *))cmp);
	int endflag = 0;
	for(int i=0;i<a;i++)
	{
		sum--;
		for(int j=0;j<aarr[i];j++)
		{
			if(acub < b)
			{
				sum +=barr[acub++];
			}
			if(acub == b)
			{
				endflag = 1;
				break;
			}
		}
		if(endflag) break;
	}
	if(a == 0 || b == 0) sum = 1;
	printf("%lld",sum);
}
	
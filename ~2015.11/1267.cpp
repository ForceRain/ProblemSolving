#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int N,num;
	unsigned long long Y=0,M=0;
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		scanf("%d",&num);
		int dive=num/30;
		Y+=dive*10+10;
		dive=num/60;
		M+=dive*15+15;
	}
	if (Y>M)
		printf("M %llu\n",M);
	else if (Y<M)
		printf("Y %llu\n",Y);
	else
		printf("Y M %llu\n",Y);

	return 0;
}
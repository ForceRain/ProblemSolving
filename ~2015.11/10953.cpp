#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int N,a,b;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
		scanf("%d,%d",&a,&b);
		printf("%d\n",a+b);
	}
	return 0;
}
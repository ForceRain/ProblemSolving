#include <iostream>
#include <cstdio>

using namespace std;

char l1[101];
char l2[101];

int main(void)
{
	int test;
	scanf("%d",&test);
	
	for ( int i=1;i<=test;i++ )
	{
		scanf("%s",l1);
		scanf("%s",l2);
		printf("Case %d: %s, %s\n",i,l2,l1);
	}

	return 0;
}
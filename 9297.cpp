#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for ( int i=0;i<test;i++ )
	{
		int a,b;
		scanf("%d%d",&a,&b);

		printf("Case %d: ",i+1);
		if ( a%b ==0 )
			printf("%d\n",a/b);
		else if ( a/b == 0 )
			printf("%d/%d\n",a%b,b);
		else
			printf("%d %d/%d\n",a/b,a%b,b);
	}

	return 0;
}
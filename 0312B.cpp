#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%d\n",(a+d)>(b+c)?b+c:a+d);

	return 0;
}
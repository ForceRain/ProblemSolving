#include <iostream>
#include <cstdio>
#include <cmath>

#define VALUE(a,b) ( ((a)-(b))*((a)-(b)) )

using namespace std;

int main(void)
{
	int t;
	scanf("%d",&t);
	int x1,y1,x2,y2,r;

	for (int i=0;i<t;i++)
	{
		scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&r);
		printf("%.3lf\n",sqrt( VALUE(x1,x2) + VALUE(y1,y2) )-r);
	}

	return 0;
}
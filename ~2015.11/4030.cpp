#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	int a,b;
	int cas_num=1;
	while (true)
	{
		scanf("%d%d",&a,&b);
		int cnt=0;
		if (a==0 && b==0)
			break;

		for (int i=a;i<=b;i++)
		{
			int limit=(sqrt(i)+1);
			int l1=a+1;
			int l2=b;
			bool c1=false,c2=false;
			for (int j=1;j<=limit;j++)
			{
				if ( (l1/j)==j && ((l1%j) == 0) )
					c1=true;
			}
			for (int j=1;j<=limit;j++)
			{
				if ( l2 == ((j)*(j+1))/2 )
					c2=true;
			}
			if ( c1 && c2 )
				cnt++;
		}

		printf("Case %d: %d\n",cas_num++,cnt);
	}

	return 0;
}
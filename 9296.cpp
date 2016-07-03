#include <iostream>
#include <cstdio>

using namespace std;

char in1[1001];
char in2[1001];

int main(void)
{
	int test;
	scanf("%d",&test);

	for ( int i=0;i<test;i++ )
	{
		int len;
		scanf("%d",&len);
		scanf("%s",in1);
		scanf("%s",in2);

		int cnt = 0;
		for ( int j=0;j<len;j++ )
			if ( in1[j] != in2[j] )
				cnt++;

		printf("Case %d: %d\n",i+1,cnt);
	}

	return 0;
}
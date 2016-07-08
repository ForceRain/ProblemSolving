#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int page_present[1001];

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for ( int i=0;i<test;i++ )
	{
		int N,Q,num;
		char c;

		memset(page_present,0,sizeof(page_present));
		scanf("%d%d",&N,&Q);
		
		for ( int j=0;j<Q;j++ )
		{
			getchar();
			scanf("%c%d",&c,&num);
			if ( c=='?' )
			{
				int cnt = 0,idx;
				for ( int k=1;k<=N;k++ )
				{
					if ( page_present[k] == 0 )
						cnt++;
					if ( cnt == num )
					{
						idx = k;
						break;
					}
				}
				printf("%d\n",idx);
			}
			else
				page_present[num] = page_present[N-num+1] = 1;
		}

	}

	return 0;
}
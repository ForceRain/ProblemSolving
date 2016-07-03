#include <iostream>
#include <cstdio>

using namespace std;

int tmp_buffer[1001];
int N,sum;

void tracking(int n,int state,int acc,int starting)
{
	for ( int i=starting;i<=state;i++ )
	{
		tmp_buffer[N-n] = i;
		if ( n == 1 )
		{
			int tS = 0;
			for (int j=0;j<N;j++)	tS+=tmp_buffer[j];
			if ( sum == tS )
			{
				printf("(");
				for ( int j=0;j<N-1;j++ )
					printf("%d,",tmp_buffer[j]);
				printf("%d)\n",tmp_buffer[N-1]);
			}
		}
		else if ( (acc-i) >= i )
			tracking(n-1,state,acc-i,i);
	}
}

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for (int i=1;i<=test;i++)
	{
		int S;
		scanf("%d%d%d",&N,&S,&sum);
		printf("Case %d:\n",i);
		tracking(N,S,sum,1);
	}

	return 0;
}
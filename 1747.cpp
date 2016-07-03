#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

#define MAX 2000001

int mapp[MAX];
char num_stream[1001];

int main(void)
{
	freopen("test.txt","r",stdin);
	for ( int j=0; j<= MAX;j++ )	mapp[j] = 1;
	mapp[1] = mapp[0] = 0;
	for ( int i = 2 ; i <= MAX ; i++ )
	{
		if ( mapp[i] != 0 )
		{
			for ( int j = i*2; j <= MAX ; j+=i )
				mapp[j] = 0;
		}
	}

	int val,res;
	scanf("%d",&val);

	for ( int i = val; i<= MAX;i++ )
	{
		if ( mapp[i] != 0 )
		{
			// palindrome checking.
			bool okay = true;
			sprintf(num_stream,"%d",i);
			int len = strlen(num_stream);
			int lim = len / 2;
			for ( int j = 0; j < lim; j++ )
			{
				if ( num_stream[j] != num_stream[len-1-j] )
					okay = false;
			}
			if (okay)
			{
				res = i;
				break;
			}
		}
	}
	printf("%d\n",res);

	return 0;
}
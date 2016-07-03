#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

char tmp_stream[103];
char out_stream[103];

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for ( int i=0;i<test;i++ )
	{
		int val;
		scanf("%d",&val);
		int ruler = 1;
		while ( val >= ruler )	ruler *= 10;

		if ( (ruler/2) <= val )
			printf("%llu\n",(unsigned long long)(ruler/2)*(ruler/2-1) );
		else
		{
			memset( tmp_stream,0,sizeof(tmp_stream) );
			memset( out_stream,0,sizeof(out_stream) );
			int ptr = 100;
			int val_tmp = val;
			while ( val_tmp > 0 )
			{
				tmp_stream[ptr--] = abs((val_tmp%10)-9)+'0';
				val_tmp /= 10;
			}
			while ( tmp_stream[ptr] == 0 )	ptr++;
			for ( int j=0;j<103;j++ )	out_stream[j] = tmp_stream[ptr++];

			int res = atoi(out_stream);
			printf("%llu\n",(unsigned long long)val*res);
		}
	}

	return 0;
}
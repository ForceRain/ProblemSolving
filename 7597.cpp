#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[1001];

int main(void)
{
	freopen("test.txt","r",stdin);
	while ( true )
	{
		scanf("%s",input_stream);
		if ( strcmp("#",input_stream) == 0 )
			break;

		int A = 0,B = 0;
		int len = strlen( input_stream );
		int aCnt = 0, bCnt = 0;
		for ( int j=0;j<len;j++ )
		{
			if ( input_stream[j] =='A' )	aCnt++;
			else	bCnt++;

			if ( ( aCnt >= 4 ) && (aCnt-bCnt >= 2) )
			{
				A++;
				aCnt = 0;
				bCnt = 0;
			}
			if ( ( bCnt >= 4 ) && (bCnt-aCnt >= 2) )
			{
				B++;
				aCnt = 0;
				bCnt = 0;
			}
		}
		printf("A %d B %d\n",A,B);
	}

	return 0;
}
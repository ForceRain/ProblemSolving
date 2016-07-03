#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[1001];
char charSpace[201][201];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	while ( true )
	{
		memset(charSpace,0,sizeof(charSpace));
		scanf("%d",&N);
		
		if ( N == 0 )
			break;

		scanf("%s",input_stream);
		int len = strlen( input_stream );

		int lineNo = 0 ;
		bool goRight = true;
		int ptr = 0, mvr = 1;
		while ( ptr < len )
		{
			charSpace[lineNo][mvr-1] = input_stream[ptr++];
			if (goRight)	mvr++;
			else
				mvr--;

			if ( mvr > N )
			{
				goRight = false;
				mvr = N;
				lineNo++;
			}
			else if ( mvr < 1 )
			{
				goRight = true;
				mvr = 1;
				lineNo++;
			}
		}

		for ( int j=0;j<N;j++ )
		{
			for ( int i=0;i<lineNo;i++ )
				printf("%c",charSpace[i][j]);
		}
		printf("\n");
	}
	return 0;
}
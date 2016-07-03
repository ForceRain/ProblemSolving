#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[100];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);
	getchar();

	for (int i=0;i<N;i++)
	{
		gets(input_stream);
		int len = strlen(input_stream);
		bool checking = true;
		int nStart=-1,nEnd;
		
		for ( int j=0;j<len;j++ )
		{
			if ( input_stream[j]!=' ' && !( '0' <= input_stream[j] && input_stream[j] <='9' ))
				checking = false;
			if ( ( '0' <= input_stream[j] && input_stream[j] <='9' ) && nStart == -1 )
				nStart = j;
			if ( ( '0' <= input_stream[j] && input_stream[j] <='9' ) )
				nEnd = j;
		}
		if ( checking )
		{
			bool yep = true;
			for ( int j=nStart;j<=nEnd;j++ )
			{
				if ( input_stream[j] == ' ' )
					yep = false;
			}
			if ( yep )
			{
				while ( input_stream[nStart] == '0' )	nStart++;
				if ( len == 1 )
					printf("%s\n",input_stream);
				else
					printf("%s\n",input_stream+nStart);
			}
			else
				printf("invalid input\n");
		}
		else
			printf("invalid input\n");
	}

	return 0;
}
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

char inputStr[10];

int main(void)
{
	int N;
	while ( true )
	{
		scanf("%d",&N);
		if ( N==0 )
			break;
		int Jane = 0,Joe = 0, Jean = 0,James = 0,others = 0 ;
		for ( int j=0;j<N;j++ )
		{
			scanf("%s",inputStr);
			int len = strlen(inputStr );
			bool allDigit = true;
			for ( int k=0;k<len;k++ )
			{
				if ( !('0' <= inputStr[k] && inputStr[k] <='9'))
					allDigit = false;
			}
			if ( !allDigit )
			{
				if ( len == 1 && inputStr[0] == 'S' )	James++;
				else if ( len == 1 && ( inputStr[0] =='M' || inputStr[0] == 'L') )	Joe++;
				else
					others++;
			}
			else
			{
				int val = atoi( inputStr );
				if ( val >= 12 )
					Jean++;
				else
					Jane++;
			}
		}
		printf("%d %d %d %d %d\n",Joe,Jean,Jane,James,others);
	}
	return 0;
}
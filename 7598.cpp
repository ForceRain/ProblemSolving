#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[101];
char tmp_stream[101];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	while ( true )
	{
		scanf("%s%d",input_stream,&N);
		if ( ( strcmp(input_stream,"#") == 0 ) && ( N == 0 ) )
			break;

		int summation = N;
		 
		while ( true )
		{
			int val;
			scanf ("%s%d",tmp_stream,&val);
			if ( ( strcmp("X",tmp_stream) == 0 ) && ( val == 0 ) )
				break;

			if ( strcmp("B",tmp_stream) == 0 )
			{
				if ( (summation + val) <= 68 )
					summation += val;
			}
			else
			{
				if ( summation >= val )
					summation -= val;
			}
		}
		printf("%s %d\n",input_stream,summation);
	}
	return 0;
}
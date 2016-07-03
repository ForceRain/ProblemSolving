#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char input_stream[1001];

int main(void)
{
	freopen("test.txt","r",stdin);
	while ( true )
	{
		int mapping[26] = { 0 };

		gets(input_stream);

		if ( strcmp( "#",input_stream ) == 0 )
			break;

		int len = strlen( input_stream );

		for ( int j=0;j<len;j++ )
		{
			if ( 'a' <= input_stream[j] && input_stream[j] <= 'z' )
				mapping[ input_stream[j] - 'a' ]++;
			if ( 'A' <= input_stream[j] && input_stream[j] <= 'Z' )
				mapping[ input_stream[j] - 'A' ]++;
		}
		int cnt = 0;
		for ( int j=0;j<26;j++ )	if ( mapping[j] != 0 )	cnt++;
		printf("%d\n",cnt);
	}
	return 0;
}
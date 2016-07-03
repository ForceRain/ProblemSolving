#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

char output[10010];
char input_stream[10010];
char total_stream[10010];

int main(void)
{
	int N;
	while ( true )
	{
		int ptr = 0;
		scanf("%d",&N);
		if ( N == 0 )	break;

		getchar();
		gets( input_stream );
		int len = strlen( input_stream );
		for ( int j = 0, ptr = 0 ; j < len ; j++ )	if ( input_stream[j] != ' ' )	total_stream[ptr++] = input_stream[j];
		total_stream[ptr] = 0;
		
		int res_len = strlen( total_stream );
		int lim = ( ( res_len % N ) == 0 ) ? res_len/N : (res_len/N + 1) ;

		for ( int j=0; j < lim ; j++ )

	}

	return 0;
}
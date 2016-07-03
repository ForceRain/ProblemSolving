#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

char input_stream[1001];
char mapping [256];
string resultArr [1001];

int main(void)
{
	char c;
	int input_ptr = 0;
	int res_ptr = 0;
	for ( int i='A',j='a';i<='Z';i++,j++ )	mapping[i] = j;
	for ( int i='a';i<='z';i++ )	mapping[i] = i;
	for ( int i='0';i<='9';i++)	mapping[i] = i;

	freopen("test.txt","r",stdin);
	while ( (c = getchar()) != '#' )
	{
		if ( ( c == ' ' ) || ( c == '\n' ) )
		{
			bool nope = false;
			for (int j=0;j<input_ptr;j++)
				if ( ('a' <= input_stream[j] && input_stream[j] <= 'z') )	nope = true;
			if ( nope )
			{
				input_stream[ input_ptr ] = '\0';
				resultArr[res_ptr++] = string( input_stream );
			}
			input_ptr = 0;
		}
		else if ( ('a' <= c && c <= 'z') || ( 'A' <= c && c <= 'Z' ) || ('0' <= c && c <= '9') )
			input_stream[ input_ptr++ ] = mapping[c];
		
		if ( c == '\n' )
		{
			sort( resultArr,resultArr+res_ptr );
			string bef;
			for ( int j=0;j<res_ptr;j++ )
			{
				if ( (j != 0) )
					if ( bef == resultArr[j] )	continue;

				printf("%s\n",resultArr[j].c_str());
				bef = resultArr[j];
			}
			printf("\n");
			res_ptr = 0;
		}
	}

	return 0;
}

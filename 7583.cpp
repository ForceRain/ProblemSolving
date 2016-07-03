#include <iostream>
#include <cstdio>
#include <stack>
#include <cstring>

using namespace std;

char input_stream[300];

int main(void)
{
	freopen("test.txt","r",stdin);
	while (true)
	{
		stack<char> cont;
		scanf("%s",input_stream);

		if ( strcmp(input_stream,"#") == 0 )
			break;

		int len = strlen(input_stream);
		int ptr = 1;
		printf("%c",input_stream[0]);
		while ( ptr < (len - 1) )	cont.push(input_stream[ptr++]);
		while ( !cont.empty() )
		{
			printf("%c",cont.top());
			cont.pop();
		}
		if ( len > 1 )
			printf("%c",input_stream[len-1]);
		printf("%c",getchar());
	}
	return 0;
}
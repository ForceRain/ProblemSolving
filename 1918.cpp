#include <iostream>
#include <stack>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[10001];
stack < char > container;
int in_priority[256];
int out_priority[256];

int main(void)
{
	in_priority['#']=out_priority['#']=-1;
	in_priority['-']=in_priority['+']=1;
	in_priority['*']=in_priority['/']=3;
	in_priority['(']=5;
	out_priority['-'] =out_priority['+'] =1;
	out_priority['*'] =out_priority['/'] =3;
	out_priority['('] =0;

	freopen("test.txt","r",stdin);
	scanf("%s",input_stream);
	int len = strlen(input_stream);
	container.push('#');

	for ( int i=0;i<len;i++ )
	{
		if ( ('A'<= input_stream[i]) && (input_stream[i] <= 'Z') )
			printf("%c",input_stream[i]);
		else
		{
			if ( input_stream[i]==')' )
			{
				while ( container.top()!='(' && ( container.top() !='#' ) )
				{
					printf("%c",container.top());
					container.pop();
				}
				if ( container.top() != '#' )
					container.pop();
			}
			else
			{
				while ( container.top() != '#' && (in_priority[container.top()] <= out_priority[input_stream[i]]) )
				{
					printf("%c",container.top());
					container.pop();
				}
				container.push(input_stream[i]);
			}
		}
	}

	while ( container.top() != '#' )
	{
		printf("%c",container.top());
		container.pop();
	}

	return 0;
}
#include <iostream>
#include <cstdio>
#include <stack>
#include <cstring>

using namespace std;

char input_stream[100];
stack < char > container;

int main(void)
{
	scanf("%s",input_stream);
	int len = strlen( input_stream );

	int cnt = 0;
	for (int i=0;i<len;i++)
	{
		if ( input_stream[i] == ')' )
		{
			if ( (!container.empty()) && container.top() == '(' )
				container.pop();
			else
				cnt++;
		}
		else
			container.push(input_stream[i]);
	}
	cnt += container.size();
	printf("%d\n",cnt);

	return 0;
}
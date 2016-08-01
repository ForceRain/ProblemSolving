#include <iostream>
#include <stack>
#include <cstdio>
#include <cstring>

using namespace std;

char input_buffer[200];

int main(void)
{
	while (true)
	{
		bool is_round=false;				// false==bracket, true==round;
		gets(input_buffer);
		stack < char > round;
		stack < char > brack;
		if (input_buffer[0]=='.')
			break;

		bool check_it=true;
		int len=strlen(input_buffer);
		for (int i=0;i<len;i++)
		{
			if (input_buffer[i]=='(')
			{
				round.push('(');	is_round=true;
			}
			if (input_buffer[i]==')')
			{
				if (round.empty() || (!is_round))
				{
					check_it=false;
					break;
				}
				round.pop();
			}
			if (input_buffer[i]=='[')
			{
				brack.push('[');	is_round=false;
			}
			if (input_buffer[i]==']')
			{
				if (brack.empty() || (is_round))
				{
					check_it=false;
					break;
				}
				brack.pop();
			}
		}
		if (check_it)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
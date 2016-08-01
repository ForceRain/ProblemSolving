#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

using namespace std;

int oper_pre[256];
vector <char> container;
char input_buffer[10000000];

int main(void)
{
	char c;
	int len;
	oper_pre['(']=3;
	oper_pre['+']=1;
	oper_pre['-']=1;
	oper_pre['*']=2;
	oper_pre['/']=2;

	container.push_back('(');
	while ((c=getchar())!=EOF)
	{
		if (c=='\n')
		{
			while (container.back()!='(')
			{
				printf("%c",container.back());
				container.pop_back();
			}
		}

		if ( ('A' <= c && c<='Z'))
			printf("%c",c);
		else if (c=='\n')
		{}
		else
		{
			if (container.empty())
				container.push_back(c);
			else
			{
				if (c==')')
				{
					while (container.back()!='(')
					{
						printf("%c",container.back());
						container.pop_back();
					}
					container.pop_back();
				}
				else if ((oper_pre[container.back()]>oper_pre[c]))
				{
					while ((container.back()!='(') && (oper_pre[container.back()]>=oper_pre[c]))
					{
						printf("%c",container.back());
						container.pop_back();
					}
					container.push_back(c);
				}
				else
					container.push_back(c);
			}
		}
	}
	

	return 0;
}
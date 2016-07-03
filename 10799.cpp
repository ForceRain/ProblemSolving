#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

stack < char > container;

int main(void)
{
	char c;
	freopen("test.txt","r",stdin);
	unsigned long long summation = 0;
	while ( ( c = getchar() ) != EOF )
	{
		if ( c == '(' )
			container.push('(');
		else
		{
			summation += (container.size()-1);
			container.pop();
		}
	}
	printf("%llu\n",summation);

	return 0;
}
#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

stack <char> alpha;
queue <bool> upper;
char mapping[256][256];

int main(void)
{
	char c;

	for ( int i='A',j='a';i<='Z';i++,j++ )
	{
		mapping[true][i] = i;
		mapping[false][i] = j;
	}
	for ( int i='a',j='A';i<='z';i++,j++ )
	{
		mapping[true][i] = j;
		mapping[false][i] = i;
	}
	freopen("test.txt","r",stdin);
	while ( ( ( c = getchar() ) != '#' ) )
	{
		if ( ( 'a' <= c && c <= 'z' ) )
		{
			alpha.push(c);
			upper.push(false);
		}
		else if ( ( 'A' <= c && c <= 'Z' ) )
		{
			alpha.push(c);
			upper.push(true);
		}
		else
		{
			if ( !alpha.empty() )
			{
				while ( !alpha.empty() )
				{
					printf("%c",mapping[upper.front()][alpha.top()]);
					alpha.pop();
					upper.pop();
				}
			}
			printf( "%c" , c );
		}
	}

	return 0;
}
#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int checking[256];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	for (int i=0;i<256;i++)	checking[i] = i;
	for ( int i=0;i<26;i++ )
	{
		checking[i+'A'] = i;
		checking[i+'a'] = i;
	}
	checking[' '] = 27;
	scanf("%d",&N);
	getchar();
	for ( int i=0;i<N;i++ )
	{
		char c;
		vector < char > container;
		while ( true )
		{
			c = getchar();
			if ( c == '\n' || c == EOF )
				break;
			container.push_back(c);
		}
		int lim = container.size()/2;
		int sz = container.size()-1;

		bool okay = true;

		for ( int i=0;i<lim;i++ )
			if ( checking[ container[i] ] != checking[ container[sz-i] ] )
				okay = false;

		if (!okay)
			printf("No\n");
		else
			printf("Yes\n");
	}

	return 0;
}
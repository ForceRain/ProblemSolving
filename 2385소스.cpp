#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector < string > container;
char input_stream[1001];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		scanf("%s",input_stream);
		container.push_back(string(input_stream));
	}
	sort(container.begin(),container.end());
	int sz = container.size();
	int pos = 0;
	bool found = false;
	for ( int i=0;i<sz;i++ )
	{
		if ( container[i].c_str()[0] != '0' )
		{
			pos = i;
			found = true;
			break;
		}
	}

	if ( !found )
		printf("INVALID\n");
	else
	{
		int min = 0x7FFFFFFF;
		while ( next_permutation(container.begin(),container.end()) )
		{
			string tmp = "";
			for ( int j=0;j<sz;j++ )
				tmp += container[j];
		}

	}
	

	return 0;
}
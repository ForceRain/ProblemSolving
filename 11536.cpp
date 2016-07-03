#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

char input_stream[1001];
vector < string > bef;
vector < string > after;

int main(void)
{
	int N;
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
	{
		scanf("%s",input_stream);
		bef.push_back( string( input_stream ) );
		after.push_back( string( input_stream ) );
	}
	sort( after.begin(),after.end() );
	bool same = true;
	for ( int i=0;i<N;i++ )
		if ( bef[i] != after[i] )
			same = false;
	if ( same )
		printf("INCREASING\n");
	else
	{
		bool sameTo = true;
		for ( int i=0;i<N;i++ )
			if ( bef[i] != after[N-1-i] )
				sameTo = false;
		if ( sameTo )
			printf("DECREASING\n");
		else
			printf("NEITHER\n");
	}

	return 0;
}
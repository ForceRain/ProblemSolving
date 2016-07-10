#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

char str_map[101][101];

string compressing( int y, int x, int size )
{
	if ( size == 1 )
		return string(1,str_map[y][x]);

	int lim = size/2;
	string s1 = compressing( y, x,lim );
	string s2 = compressing( y, x+lim,lim );
	string s3 = compressing( y+lim, x,lim );
	string s4 = compressing( y+lim, x+lim,lim );
	
	if ( (s1 == s2) && (s1 == s3) && (s1 == s4) && ( s1 == "1" || s1 =="0" ) )
		return s1;

	return "(" + s1 + s2 + s3 + s4 + ")";
}

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
		scanf("%s",str_map[i]);
	
	printf("%s\n",compressing(0,0,N).c_str());

	return 0;
}
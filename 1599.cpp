#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>

using namespace std;

char input_stream[101];
vector <string> container;
char *ordering = "abkdeghilmnngoprstuwy";
int mapped[256];

bool my_compare(string a, string b)
{
	int l1 = a.length();
	int l2 = b.length();
	int p1 = 0,p2 = 0;
	while ( p1 < l1 && p2 < l2 )
	{
		int val_a = mapped[a[p1]];
		int val_b = mapped[b[p2]];

		if ( ( p1+1 < l1) && (a[p1]=='n') && (a[p1+1]=='g') )
		{
			val_a = mapped[a[p1+1]];
			p1++;
		}
		if ( ( p2+1 < l2) && (b[p2]=='n') && (b[p2+1]=='g') )
		{
			val_b = mapped[b[p2+1]];
			p2++;
		}
		if ( val_a < val_b )
			return true;
		else if ( val_a > val_b )
			return false;
		p1++;p2++;
	}
	if ( p2 < l2 )
		return true;
	else
		return false;
}

int main(void)
{
	freopen("test.txt","r",stdin);
	int len = strlen(ordering);
	for ( int i=0;i<len;i++ )
		mapped[ordering[i]] = i;
	
	int N;
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
	{
		scanf("%s",input_stream);
		container.push_back( string(input_stream) );
	}
	sort(container.begin(),container.end(),my_compare);

	for ( int i=0;i<N;i++ )
		printf("%s\n",container[i].c_str());

	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int mapping[100001];

int main(void)
{
	char c;
	int T,M,U,F,D;
	freopen("test.txt","r",stdin);
	scanf("%d%d%d%d%d",&M,&T,&U,&F,&D);
	getchar();

	for ( int i=1;i<=T;i++ )
	{
		scanf("%c",&c);
		if ( c == 'u' || c == 'd' )
			mapping[i] = mapping[i-1] + (U+D);
		else
			mapping[i] = mapping[i-1] + 2*F;
		getchar();
	}

	int pos = upper_bound(mapping,mapping+(T+1),M)-mapping;
	printf("%d\n",pos-1);

	return 0;
}
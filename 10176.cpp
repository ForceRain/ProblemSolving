#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int mapping[256];
char input_stream[10001];

int main(void)
{
	int N;
	for (int i=0;i<256;i++)	mapping[i] = i;
	for ( int i='a',cnt = 0;i<='m';i++ )	mapping[i] = ++cnt;
	for ( int i='z',cnt = 0;i>'m';i-- )		mapping[i] = ++cnt;
	for ( int i='A',cnt = 0;i<='M';i++ )	mapping[i] = ++cnt;
	for ( int i='Z',cnt = 0;i>'M';i-- )		mapping[i] = ++cnt;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		scanf("%s",input_stream);
		int len = strlen(input_stream);

		int checking = 0;
		for ( int j=0;j<len;j++ )
			checking ^= mapping[ input_stream[j] ];

		if ( checking == 0 )
			printf("Yes\n");
		else
			printf("No\n");
	}

	return 0;
}
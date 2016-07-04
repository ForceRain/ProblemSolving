#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int indexing_a[100000];
int indexing_b[100000];
char input_stream[1000];

int main(void)
{
	int a,b;
	freopen("test.txt","r",stdin);
	while ( true )
	{
		memset(indexing_a,0,sizeof(indexing_a));
		memset(indexing_b,0,sizeof(indexing_b));

		int cnt_a = 1;
		int cnt_b = 1;
		bool no_overlap = false;

		scanf("%d%d",&a,&b);
		int ori_a = a;
		int ori_b = b;
		if ( ( a == 0 ) && ( b == 0 ) )
			break;

		// a routine.
		cnt_a++;
		cnt_b++;
		if ( a < 100000 )
			indexing_a[a] = cnt_a++;
		if ( b < 100000 )
			indexing_b[b] = cnt_b++;
		do
		{
			sprintf(input_stream,"%d",a);
			int len = strlen(input_stream);
			int idx = 0, summation = 0;
			while ( idx < len )
			{
				summation += (input_stream[idx]-'0')*(input_stream[idx]-'0');
				idx++;
			}
			a = summation;
			indexing_a[a] = cnt_a++;
		}
		while ( indexing_a[a] == 0 );
		// b routine.
		do
		{
			if ( b < 100000 )	
			{
				if (  indexing_b[b] != 0 )
				{
					no_overlap = true;
					break;
				}
			}
			else
			{
				if ( a == b )
				{
					no_overlap = true;
					break;
				}
			}
			sprintf(input_stream,"%d",b);
			int len = strlen(input_stream);
			int idx = 0, summation = 0;
			while ( idx < len )
			{
				summation += (input_stream[idx]-'0')*(input_stream[idx]-'0');
				idx++;
			}
			b = summation;
			indexing_b[b] = cnt_b++;
		}
		while ( indexing_a[b] == 0 );

		printf("%d %d ",ori_a,ori_b);
		if ( no_overlap )
			printf("0\n");
		else
			printf("%d\n",indexing_a[b]+indexing_b[b]);
	}
	return 0;
}
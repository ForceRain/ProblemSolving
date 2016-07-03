#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream1[100011];
char input_stream2[100011];

int main(void)
{
	freopen("test.txt","r",stdin);
	scanf("%s",input_stream1);
	scanf("%s",input_stream2);
	int len = strlen( input_stream1 );

	for ( int i=0;i<len;i++ )
	{
		int v1 = input_stream1[i] - '0';
		int v2 = input_stream2[i] - '0';
		if ( v1 & v2 )
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	for ( int i=0;i<len;i++ )
	{
		int v1 = input_stream1[i] - '0';
		int v2 = input_stream2[i] - '0';
		if ( v1 | v2 )
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	for ( int i=0;i<len;i++ )
	{
		int v1 = input_stream1[i] - '0';
		int v2 = input_stream2[i] - '0';
		if ( v1 ^ v2 )
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	for ( int i=0;i<len;i++ )
	{
		int v1 = input_stream1[i] - '0';
		if ( v1 )
			printf("0");
		else
			printf("1");
	}
	printf("\n");
	for ( int i=0;i<len;i++ )
	{
		int v2 = input_stream2[i] - '0';
		if ( v2 )
			printf("0");
		else
			printf("1");
	}
	printf("\n");

	return 0;
}
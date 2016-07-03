#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[1001];
int arr[101];

int main(void)
{
	int ptr = 0;
	int maxLen = -1;
	freopen("test.txt","r",stdin);
	while ( gets(input_stream) != NULL )
	{
		int len = strlen(input_stream);
		arr[ptr++] = len;
		if ( maxLen < len )
			maxLen = len;
	}
	
	int accSum = 0;
	for ( int i=0;i<(ptr-1);i++ )
	{
		if ( maxLen != arr[i] )
			accSum += (maxLen-arr[i])*(maxLen-arr[i]);
	}
	printf("%d\n",accSum);

	return 0;
}
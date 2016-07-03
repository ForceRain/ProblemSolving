#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

using namespace std;

char input_stream[10];

int main(void)
{
	int val;
	scanf("%s%d",input_stream,&val);

	int timp = atoi(input_stream);
	int len = strlen(input_stream);
	int looping = (val / len) > timp ? timp : (val/len);
	

	for ( int i=0;i<looping ;i++ )	printf("%s",input_stream);
	
	if ( looping != timp )
	{
		int nam = val % len;
		for ( int j=0;j<nam;j++ )	printf("%c",input_stream[j]);
	}
	printf("\n");

	return 0;
}
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[1000001];

int main(void)
{
	freopen("test.txt","r",stdin);
	while ( true )
	{
		scanf("%s",input_stream);
		if (strcmp( input_stream,"END" ) == 0)
			break;

		int counter = 1;
		int len = strlen(input_stream);
		int bef = (len == 1 && input_stream[0]=='1') ? 1 : 0;

		while ( len != bef )
		{
			counter++;
			bef = len;
			sprintf(input_stream,"%d",len);
			len = strlen(input_stream);
		}
		printf("%d\n",counter);
	}

	return 0;
}
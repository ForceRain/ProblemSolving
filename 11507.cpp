#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[1001];
int checkMap[256][14][14];
int typeCnt[256];

int main(void)
{
	for ( int i=0;i<256;i++ )	typeCnt[i] = 13;
	scanf("%s",input_stream);

	int len = strlen( input_stream );
	bool nope = false;
	for ( int i=0;i<len;i+=3 )
	{
		int type = input_stream[i];
		int n1 = input_stream[i+1];
		int n2 = input_stream[i+2];

		if ( checkMap[type][n1][n2]!=0 )
		{
			printf("GRESKA\n");
			nope = true;
			break;
		}
		else
		{
			checkMap[type][n1][n2]++;
			typeCnt[type]--;
		}
	}

	if (!nope)	
		printf("%d %d %d %d\n",typeCnt['P'],typeCnt['K'],typeCnt['H'],typeCnt['T']);

	return 0;
}
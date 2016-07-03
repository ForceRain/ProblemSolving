#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[101];
int accCal[14]={0,0,31,59,90,120,151,181,212,243,273,304,334,365};

int main(void)
{
	int N;
	int standard = 4+accCal[8];
	freopen("test.txt","r",stdin);
	while (true)
	{
		cin>>N>>input_stream;
		getchar();
		int val = 0;
		if ( N==0 && (strcmp(input_stream,"#")==0) )
			break;

		val = N;
		if ( N==29 && strcmp(input_stream,"February")==0 )
			printf("Unlucky\n");
		else
		{
			if ( strcmp(input_stream,"January")==0 ) val += accCal[1];
			else if ( strcmp(input_stream,"February")==0 ) val += accCal[2];
			else if ( strcmp(input_stream,"March")==0 ) val += accCal[3];
			else if ( strcmp(input_stream,"April")==0 ) val += accCal[4];
			else if ( strcmp(input_stream,"May")==0 ) val += accCal[5];
			else if ( strcmp(input_stream,"June")==0 ) val += accCal[6];
			else if ( strcmp(input_stream,"July")==0 ) val += accCal[7];
			else if ( strcmp(input_stream,"August")==0 ) val += accCal[8];
			else if ( strcmp(input_stream,"September")==0 ) val += accCal[9];
			else if ( strcmp(input_stream,"October")==0 ) val += accCal[10];
			else if ( strcmp(input_stream,"November")==0 ) val += accCal[11];
			else if ( strcmp(input_stream,"December")==0 ) val += accCal[12];

			if ( standard < val )
				printf("No\n");
			else if ( standard > val )
				printf("Yes\n");
			else
				printf("Happy birthday\n");
		}
	}
}
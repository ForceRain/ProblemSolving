#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

char input_stream[101];
unsigned long long classes[8];

int main(void)
{
	int test;

	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for ( int i=0;i<test;i++ )
	{
		int val_flag;
		scanf("%d",&val_flag);
		
		if ( val_flag == 1 )		// IPv8 to unsigned number.
		{
			scanf("%s",input_stream);
			int len = strlen(input_stream);
			int class_ptr = 0;
			int move_ptr = 0;
			int bef_ptr = 0;
			unsigned long long summation = 0;
			while ( move_ptr < len )
			{
				if ( input_stream[move_ptr]=='.' )
				{
					input_stream[move_ptr] = 0;
					classes[class_ptr++] = atoi( input_stream+bef_ptr );
					bef_ptr = move_ptr+1;
				}
				move_ptr++;
			}
			input_stream[move_ptr] = 0;
			classes[class_ptr] = atoi( input_stream+bef_ptr );

			for ( int j=0;j<8;j++ )
				summation += classes[j] << (7-j)*8;
			printf("%llu\n",summation);
		}
		else						// unsigned number to IPv8.
		{
			unsigned long long input;
			unsigned long long ruler;
			int counter = 0;
			scanf("%llu",&input);
			
			for ( int j=0;j<8;j++ )
			{
				ruler = 1;
				counter = 0;
				while ( counter < (7-j)*8 )	{	counter++; ruler*=2;	}
				classes[j] = input/ruler;
				input = input % ruler;
			}
			for ( int j=0;j<8;j++ )
			{
				if ( j == 0 )
					printf("%llu",classes[j]);
				else
					printf(".%llu",classes[j]);
			}
			printf("\n");
		}
	}

	return 0;
}
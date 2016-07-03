#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[101];
int ques_panalty[256];
bool ques_right[256];

int main(void)
{
	freopen("test.txt","r",stdin);

	while ( true )
	{
		int time; 
		scanf("%d",&time);
		if ( time == -1 )
			break;

		char ques;
		getchar();
		scanf("%c",&ques);
		scanf("%s",input_stream);
		
		if ( !ques_right[ ques ] )
		{
			if ( strcmp( input_stream,"wrong" ) == 0 )
				ques_panalty[ques] += 20;
			else
			{
				ques_right[ ques ] = true;	
				ques_panalty[ ques ] += time;
			}
		}

	}

	int summation = 0;
	int counting = 0;
	for ( int i='A' ; i<='Z' ; i++ )
	{
		if ( ques_right[i] )
		{
			counting ++;
			summation += ques_panalty[ i ];
		}
	}

	printf("%d %d\n",counting,summation);

	return 0;
}
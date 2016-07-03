#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

char input_stream[500101];
int suffix_idx_arr[500101];
int N;

bool my_compare( int a, int b )
{
	if ( strcmp( input_stream+ ( a-1 ) , input_stream+( b-1 ) ) < 0 )
		return true;
	else return false;
}

int main(void)
{
	freopen("test.txt","r",stdin);
	scanf("%s",input_stream);
	int len = strlen( input_stream );
	N = len - 1;

	for ( int i=1;i<=len;i++ )	suffix_idx_arr[i] = i;

	sort(suffix_idx_arr+1,suffix_idx_arr+(len+1),my_compare);
	
	for ( int i=1;i<=len;i++ )	printf("%d ",suffix_idx_arr[i]);
	printf("\n");

	printf("x ");
	for ( int i=1;i<len;i++ )
	{
		int counter = 0;
		int up_ptr = suffix_idx_arr[ i ] - 1 ;
		int low_ptr = suffix_idx_arr [ i+1 ] - 1 ;

		while ( up_ptr < len && low_ptr < len && ( input_stream[up_ptr] == input_stream[low_ptr] ) )
		{
			up_ptr++;low_ptr++;
			counter++;
		}

		printf("%d ",counter);
	}
	printf("\n");

	return 0;
}
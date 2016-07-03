#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int mask_alphabet[256];
int masked[20];
char input_stream[30];
char permu[30];
int mapper[30];

int main(void)
{
	int m_val = 1;
	for ( int i='A';i<='Z';i++ )	
	{
		mask_alphabet[i] = m_val;
		m_val = m_val << 1;
	}
	freopen("test.txt","r",stdin);

	int R;
	scanf("%d",&R);
	for ( int i=1;i<=R;i++ )	
	{
		permu[i-1] = i+'0';
		mapper[i-1] = i-1;
	}

	for ( int i=0;i<R;i++ )
	{
		scanf("%s",input_stream);
		int len = strlen(input_stream);
		for ( int j=0;j<len;j++ )
			masked[i] |= mask_alphabet[ input_stream[j] ];
	}
	int lim = R-1;
	int min_cnt = 0x7FFFFFFF;
	do
	{
		int sum_cnt = 0;
		for ( int j = 0 ; j < lim ; j++ )
		{
			int m_tmp = ( masked[ mapper[ permu[j]-'0' ] ] & masked[ mapper[ permu[j+1]-'0' ] ] );
			for ( int k = 0 ; k < 26 ; k++ )
				if ( ( m_tmp & mask_alphabet[k+'A'] ) != 0 )
					sum_cnt ++ ;
		}
		if ( min_cnt > sum_cnt )
			min_cnt = sum_cnt;
	}
	while ( next_permutation(permu,permu+R) );
	printf("%d\n",min_cnt);
	
	return 0;
}
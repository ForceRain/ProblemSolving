#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[10001];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);
	getchar();

	for ( int i=0;i<N;i++ )
	{
		gets(input_stream);
		int len = strlen( input_stream );
		int vals[26] = {0};

		for ( int j=0;j<len;j++ )
		{
			if ( ('a' <= input_stream[j]) && (input_stream[j] <='z') )
				vals[ input_stream[j]-'a' ]++;
			else if ( ('A' <= input_stream[j]) && (input_stream[j] <='Z') )
				vals[ input_stream[j]-'A' ]++;
		}

		int res = -1;
		for ( int j=1;j<=3;j++ )
		{
			bool allSame = true;
			int checking = j;
			for ( int k=0;k<26;k++ )
				if ( checking > vals[k] )
					allSame = false;

			if ( allSame )
				res = j;
		}
		printf("Case %d: ",i+1);
		if ( res == -1 )
			printf("Not a Pangram\n");
		else if ( res == 1 )
			printf("Pangram!\n");
		else if ( res == 2 )
			printf("Double Pangram!!\n");
		else
			printf("Triple Pangram!!!\n");
	}

	return 0;
}
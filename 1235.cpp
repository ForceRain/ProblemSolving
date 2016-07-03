#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char num[1001][101];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for (int i=0;i<N;i++)
		scanf("%s",num[i]);

	int postVal = strlen(num[0]) - 1;

	for ( int i=postVal; i>=0;i-- )
	{
		bool okay = true;
		for ( int k = 0;k<N && (okay);k++ )
		{
			for ( int j= k+1;j<N && (okay);j++ )
			{
				if ( strcmp( num[k]+i,num[j]+i ) == 0 )
					okay = false;
			}
		}
		if (okay)
		{
			printf("%d\n",strlen(num[0])-i);
			break;
		}
	}

	return 0;
}
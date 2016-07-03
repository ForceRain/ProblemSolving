#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[100];
char sketch[500];

int main(void)
{
	int N;
	int oLen,cnt=0;
	freopen("test.txt","r",stdin);
	scanf("%s",input_stream);
	oLen = strlen(input_stream);
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
	{
		scanf("%s",sketch);
		int len = strlen(sketch);
		for ( int j=0;j<len;j++ )
			sketch[j+len] = sketch[j];
		int tLen = 2*len - oLen;
		
		for ( int j = 0 ; j <= tLen ; j++)
		{
			bool checked = true;
			for ( int k=0; k < oLen; k++ )
				if ( sketch[j+k] != input_stream[k] )
					checked = false;
			if (checked)
			{
				cnt++;
				break;
			}
		}
	}
	printf("%d\n",cnt);

	return 0;
}
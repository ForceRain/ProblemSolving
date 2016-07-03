#include <iostream>
#include <cstdio>

using namespace std;

char space[101][101];
int r_masking[101][101];
int c_masking[101][101];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for (int i=0;i<N;i++)
		scanf("%s",space[i]);

	int rCnt = 0, cCnt = 0;
	for (int i=0;i<N;i++)
	{
		int ccC = 1;
		for ( int j=0 ; j < N; j++ )
		{
			if ( space[j][i]=='X' )
				ccC = 1;
			else
				c_masking[j][i]= ccC++;
		}
	}
	for (int i=0;i<N;i++)
	{
		int ccR = 1;
		for ( int j=0 ; j < N; j++ )
		{
			if ( space[i][j]=='X' )
				ccR = 1;
			else
				r_masking[i][j] = ccR++;
		}
	}
	
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<N;j++)
		{
			if ( r_masking[i][j]==2 )
				rCnt++;
			if ( c_masking[i][j]==2 )
				cCnt++;
		}
	}
	printf("%d %d\n",rCnt,cCnt);

	return 0;
}
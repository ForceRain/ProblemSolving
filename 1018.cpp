#include <iostream>
#include <cstdio>

using namespace std;

char space[51][51];
char sample1[8][9]=
{"WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW"};
char sample2[8][9]=
{"BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB","BWBWBWBW","WBWBWBWB"};

int main(void)
{
	int M,N;
	freopen("test.txt","r",stdin);
	scanf("%d%d",&N,&M);

	for ( int i=0;i<N;i++ )	scanf("%s",space[i]);

	int limx = N-8;
	int limy = M-8;
	int res = 0x7FFFFFFF;
	for ( int i=0;i<=limx;i++ )
	{
		for ( int j=0;j<=limy;j++ )
		{
			int cnt = 0x7FFFFFFF;
			int c1=0,c2=0;
			int lx = 8+i;
			int ly = 8+j;
			for ( int k=i,smx=0;k<lx;k++,smx++ )
			{
				for ( int l=j,smy=0;l<ly;l++,smy++ )
				{
					if ( sample1[smx][smy] != space[k][l] )
						c1++;
					if ( sample2[smx][smy] != space[k][l] )
						c2++;
				}
			}
			cnt = ( c2 > c1 ) ? c1 : c2;
			if ( cnt < res )
				res = cnt;
		}
	}
	printf("%d\n",res);

	return 0;
}
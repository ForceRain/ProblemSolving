#include <iostream>
#include <cstdio>

#define BLACK 0x000001FF

using namespace std;

int sudoku[9][9];
int marker[10];

int main(void)
{
	int test;
	for ( int i=1,ruler=1;i<=9;i++,ruler*=2 )	marker[i] = ruler;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for ( int k=0;k<test;k++ )
	{
		for ( int i=0;i<9;i++ )	for (int j=0;j<9;j++)	scanf("%d",&sudoku[i][j]);

		bool okay = true;
		for ( int i=0;i<9;i++ )
		{
			int checking = BLACK;
			for ( int j=0;j<9;j++ )	checking ^= marker[sudoku[i][j]];
			if ( checking != 0 )
				okay = false;
		}
		for ( int i=0;i<9;i++ )
		{
			int checking = BLACK;
			for ( int j=0;j<9;j++ )	checking ^= marker[sudoku[j][i]];
			if ( checking != 0 )
				okay = false;
		}
		for ( int i=0;i<9;i+=3 )	for ( int j=0;j<9;j+=3 )
		{
			int checking = BLACK;
			for ( int k=i;k<i+3;k++ )
			{
				for ( int l=j;l<j+3;l++ )
					checking ^= marker[sudoku[k][l]];
			}
			if ( checking != 0 )
				okay = false;
		}
		printf("Case %d: ",k+1);
		if ( okay )
			printf("CORRECT\n");
		else
			printf("INCORRECT\n");
	}

	return 0;
}
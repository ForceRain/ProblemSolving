#include <iostream>

using namespace std;

char data[10][20]=
{"####.##.##.####"
,"..#..#..#..#..#"
,"###..#####..###"
,"###..####..####"
,"#.##.####..#..#"
,"####..###..####"
,"####..####.####"
,"###..#..#..#..#"
,"####.#####.####"
,"####.####..####"};

char input[6][16];

int main(void)
{
	for (int j=0,i=0;i<5;i++)
	{
		while (scanf("%c",&input[i][j])!='\n')j++;
	}


	
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<15;j++)
		{
			cout<<input[i][j];
		}
		cout<<endl;
	}

	return 0;
}
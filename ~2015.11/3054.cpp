#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

char space[5][100];
char ptp[5][6]={"..#..",".#.#.","#...#",".#.#.","..#.."};
char wed[5][6]={"..*..",".*.*.","*...*",".*.*.","..*.."};

int main(void)
{
	memset(space,0,sizeof(space));
	string input;
	cin>>input;

	int len=input.length();
	int tot_end;
	for (int i=1;i<=len;i++)
	{
		int start_ptr=((i==1)?0:4*(i-1));
		int end_ptr=((i==1)?5:4*(i)+1);
		if ((i%3)==0)
		{
			for (int j=0;j<5;j++)
			{
				for (int k=start_ptr,t=0;k<end_ptr;k++,t++)
				{
					if ((j==2) && (t==2))
						space[j][k]=input[i-1];
					else
						space[j][k]=wed[j][t];
				}
			}
		}
		else
		{
			for (int j=0;j<5;j++)
			{
				for (int k=start_ptr,t=0;k<end_ptr;k++,t++)
				{
					if (space[j][k]!='*')
						space[j][k]=ptp[j][t];
					if ((j==2) && (t==2))
						space[j][k]=input[i-1];
				}
			}
		}
		tot_end=end_ptr;
	}

	for (int i=0;i<5;i++)
	{
		for (int j=0;j<tot_end;j++)
			printf("%c",space[i][j]);
		printf("\n");
	}

	return 0;
}
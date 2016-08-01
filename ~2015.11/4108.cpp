#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int space[102][102];
char input_buff[102][102];

int main(void)
{
	int R,C;
	while (true)
	{
		scanf("%d%d",&R,&C);
		if (R==0 && C==0)
			break;
		for (int i=1;i<=R;i++)
		{
			scanf("%s",input_buff[i]);
			for (int j=1;j<=C;j++)
			{
				if (input_buff[i][j-1]=='*')
				{
					int lim_x=i+2;
					int lim_y=j+2;
					for (int k=i-1;k<lim_x;k++)
					{
						for (int l=j-1;l<lim_y;l++)
							space[k][l]++;
					}
				}
			}
		}
		for (int i=1;i<=R;i++)
		{
			for (int j=1;j<=C;j++)
			{
				if (input_buff[i][j-1]=='*')
					cout<<"*";
				else
					cout<<space[i][j];
			}
			cout<<endl;
		}
		memset(space,0,sizeof(space));
		memset(input_buff,0,sizeof(input_buff));
	}

	return 0;
}
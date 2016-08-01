#include <iostream>
#include <cstring>
 
using namespace std;
 
char input[53][53];
int space[53][53];
 
int calculate(int R,int S)
{
	int maximum=-1,sum=0;
	int max_x,max_y;
	int direction[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

	for (int i=1;i<=R;i++)
	{
		for (int j=1;j<=S;j++)
		{
			if (input[i][j]=='o')
			{
				space[i][j]++;
				for (int k=0;k<8;k++)
				{
				//	cout<<i+direction[k][0]<<"::"<<j+direction[k][1]<<endl;
					space[i+direction[k][0]][j+direction[k][1]]++;
					
					if ((maximum<space[i+direction[k][0]][j+direction[k][1]]) && input[i+direction[k][0]][j+direction[k][1]]!='o')
					{
						max_x=(i+direction[k][0]<=0)?1:((i+direction[k][0]>R)?R:i+direction[k][0]);
						max_y=(j+direction[k][1]<0)?1:((j+direction[k][1]>S)?S:j+direction[k][1]);
						maximum=space[i+direction[k][0]][j+direction[k][1]];
					}
				}
			}
		}
	}

	input[max_x][max_y]='o';
	cout<<"mx,y :"<<max_x<<", "<<max_y<<endl;
	for (int i=1;i<=R;i++)
	{
		for (int j=1;j<=S;j++)
		{
			cout<<space[i][j];
			if (input[i][j]=='o')
				sum+=space[i][j];
		}
		cout<<endl;
	}

	return sum/2;
}
 
int main(void)
{
    int R,S;
    cin>>R>>S;
 
	char tmp[53];
    for (int i=1;i<=R;i++)
    {
        cin>>tmp;
		strcpy(&input[i][1],tmp);
    }
  
    cout<<calculate(R,S)<<endl;
 
    return 0;
}
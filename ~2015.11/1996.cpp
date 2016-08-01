#include <iostream>

using namespace std;

char space[1002][1002];
bool num_pos[1002][1002];

int main(void)
{
	int N;
	char input[1002];
	cin>>N;

	for (int i=0;i<1002;i++)
	{
		for (int j=0;j<1002;j++)
			space[i][j]='0';
	}

	for (int i=1;i<=N;i++)
	{
		cin>>input;
		for (int j=1;j<=N;j++)
		{
			if (input[j-1]!='.')
			{
				for (int k=i-1;k<=i+1;k++)
				{
					for (int l=j-1;l<=j+1;l++)
					{
						space[k][l]+=input[j-1]-'0';
					}
				}
				num_pos[i][j]=true;
			}
		}
	}

	for (int i=1;i<=N;i++)
	{
		for (int j=1;j<=N;j++)
		{
			if (num_pos[i][j])
				cout<<'*';
			else if (!('0'<=space[i][j] && space[i][j]<='9'))
				cout<<"M";
			else
				cout<<space[i][j];
		}
		cout<<endl;
	}

	return 0;
}
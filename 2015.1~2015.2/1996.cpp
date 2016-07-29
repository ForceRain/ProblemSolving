#include <iostream>

using namespace std;

char ans[1001][1001];
int size;

void set(int i,int j,char numberin)
{
	ans[i][j]='*';
	if (((j-1)>=0) && ((i-1)>=0))
		ans[i-1][j-1]+=numberin-'0';
	if ((j-1)>=0)
		ans[i][j-1]+=numberin-'0';
	if ((j-1>=0) && ((i+1)<size))
		ans[i+1][j-1]+=numberin-'0';
	if ((i-1)>=0)
		ans[i-1][j]+=numberin-'0';
	if ((i+1)<size)
		ans[i+1][j]+=numberin-'0';
	if (((j+1)<size) && ((i-1)>=0))
		ans[i-1][j+1]+=numberin-'0';
	if (((j+1)<size))
		ans[i][j+1]+=numberin-'0';
	if (((j+1)<size) && ((i+1)<size))
		ans[i+1][j+1]+=numberin-'0';
}

int main(void)
{
	int N;
	cin>>N;

	size=N;
	char input;
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<N;j++)
			ans[i][j]='0';
	}

	for (int i=0;i<N;i++)
	{
		for (int j=0;j<N;j++)
		{
			cin>>input;
			if (('0'<=input)&&(input<='9'))
				set(i,j,input);
		}
	}

	for (int i=0;i<N;i++)
	{
		for (int j=0;j<N;j++)
		{
			if ((('0'<=ans[i][j])&&(ans[i][j]<='9')) || ans[i][j]=='*')
				cout<<ans[i][j];
			else
				cout<<'M';
		}
		cout<<endl;
	}

	return 0;
}
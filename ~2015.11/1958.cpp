#include <iostream>
#include <cstring>

using namespace std;

char input1[104];
char input2[104];
char input3[104];
int lcs[101][101][101];

bool same(char a,char b,char c)
{
	return (a==b) && (b==c) && (c==a);
}

int largest(int a,int b,int c)
{
	if (a>b)
	{
		if (a>c)
			return a;
		else
			return c;
	}
	else
	{
		if (b>c)
			return b;
		else
			return c;
	}
}

int main(void)
{
	cin>>input1;
	cin>>input2;
	cin>>input3;

	int l1=strlen(input1);
	int l2=strlen(input2);
	int l3=strlen(input3);
	
	for (int i=1;i<=l1;i++)
	{
		for (int j=1;j<=l2;j++)
		{
			for (int k=1;k<=l3;k++)
			{
				if (same(input1[i-1],input2[j-1],input3[k-1]))
					lcs[i][j][k]=lcs[i-1][j-1][k-1]+1;
				else
					lcs[i][j][k]=largest(lcs[i-1][j][k],lcs[i][j-1][k],lcs[i][j][k-1]);
			}
		}
	}

	cout<<lcs[l1][l2][l3]<<endl;

	return 0;
}
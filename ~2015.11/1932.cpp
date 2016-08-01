#include <iostream>

int arr[500][500];
int maximum=-1;
int length;

using namespace std;

int give_me(int a,int b)
{
	return (a>b)?a:b;
}

int main(void)
{
	cin>>length;

	for (int i=0;i<length;i++)
	{
		int tmp;
		for (int j=0;j<=i;j++)
		{
			cin>>tmp;
			arr[i][j]=tmp;
		}
	}

	int init_sum=0;
	for (int i=0;i<length;i++)
	{
		arr[i][0]=arr[i][0]+init_sum;
		init_sum=arr[i][0];
	}

	for (int i=1;i<length;i++)
	{
		for (int j=1;j<length;j++)
		{
			arr[i][j]+=give_me(arr[i-1][j-1],arr[i-1][j]);
		}
	}

	for (int j=0;j<length;j++)
	{
		if (maximum<arr[length-1][j])
		{
			maximum=arr[length-1][j];
		}
	}

	cout<<maximum<<endl;

	return 0;
}
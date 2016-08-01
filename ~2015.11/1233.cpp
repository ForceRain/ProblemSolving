#include <iostream>

using namespace std;

int space[100];

int main(void)
{
	int S1,S2,S3;
	cin>>S1>>S2>>S3;

	for (int i=1;i<=S1;i++)
	{
		for (int j=1;j<=S2;j++)
		{
			for (int k=1;k<=S3;k++)
				space[i+j+k]++;
		}
	}

	int maxi=-1,max_ptr=0;
	for (int i=1;i<=100;i++)
	{
		if (maxi<space[i])
		{
			maxi=space[i];
			max_ptr=i;
		}
	}
	cout<<max_ptr<<endl;

	return 0;
}
#include <iostream>

using namespace std;

void divide_and_conquer(int len)
{
	if (len==1)
		cout<<"*";
	else
	{
		int m=len/3;
		divide_and_conquer(m);
		divide_and_conquer(m);
		divide_and_conquer(m);
	//	cout<<endl;
		divide_and_conquer(m);
		for (int i=0;i<m;i++)
		{
			for (int j=0;j<m;j++)
				cout<<" ";
	//		cout<<endl;
		}
		divide_and_conquer(m);
	//	cout<<endl;
		divide_and_conquer(m);
		divide_and_conquer(m);
		divide_and_conquer(m);
	//	cout<<endl;
	}
}

int main(void)
{
	int N;
	cin>>N;
	if (N==1)
	{
		cout<<"*"<<endl;
		return 0;
	}
	int len=N/3;
	divide_and_conquer(len);
	divide_and_conquer(len);
	divide_and_conquer(len);
	cout<<endl;
	divide_and_conquer(len);
	for (int i=0;i<len;i++)
	{
		for (int j=0;j<len;j++)
			cout<<" ";
	//	cout<<endl;
	}
	divide_and_conquer(len);
	cout<<endl;
	divide_and_conquer(len);
	divide_and_conquer(len);
	divide_and_conquer(len);
	cout<<endl;

	return 0;
}
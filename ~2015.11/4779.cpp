#include <iostream>
#include <cmath>

using namespace std;

void divide_and_conquer(int value)
{
	if (value==1)
		cout<<"-";
	else
	{
		divide_and_conquer(value/3);
		for (int i=1;i<=value/3;i++)
			cout<<" ";
		divide_and_conquer(value/3);
	}
}

int main(void)
{
	int N;
	int value;
	while (cin>>N)
	{
		value=pow(3,N);

		divide_and_conquer(value);
		cout<<endl;
	}
	return 0;
}
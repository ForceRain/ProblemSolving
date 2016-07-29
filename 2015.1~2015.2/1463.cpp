#include <iostream>

using namespace std;

int minimum=10000000;

void make_one(int value,int path)
{
	if (value>=1)
	{
		if (value==1)
		{
			if (path<minimum)
				minimum=path;
		}
		else
		{
			if (value%3==0)
				make_one(value/3,path+1);
			if (value%2==0)
				make_one(value/2,path+1);
			make_one(value-1,path+1);
		}
	}
}

int main(void)
{
	int N;
	cin>>N;

	make_one(N,0);

	cout<<minimum<<endl;

	return 0;
}
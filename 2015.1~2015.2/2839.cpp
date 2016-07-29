#include <iostream>

using namespace std;

int minimum=4000;

void bbag(int num,int bag_num)
{
	if (num>=0)
	{
		if (num==0)
		{
			if (bag_num<minimum)
				minimum=bag_num;
		}
		else
		{
			bbag(num-3,bag_num+1);
			bbag(num-5,bag_num+1);
		}
	}
}

int main(void)
{
	int N;
	cin>>N;

	bbag(N,0);

	if (minimum==4000)
		cout<<"-1"<<endl;
	else
		cout<<minimum<<endl;

	return 0;
}
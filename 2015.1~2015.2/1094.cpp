#include <iostream>

using namespace std;

int total_length;
int cnt=0;

void divide(int wood)
{
	if (wood>0)
	{
		if (total_length>=wood)
		{
			total_length-=wood;
			cnt++;
		}
		divide(wood/2);
	}
}

int main(void)
{
	cin>>total_length;

	divide(64);
	cout<<cnt<<endl;

	return 0;
}
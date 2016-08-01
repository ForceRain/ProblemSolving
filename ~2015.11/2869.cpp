#include <iostream>

using namespace std;

int main(void)
{
	int up,down,length;
	cin>>up>>down>>length;

	int real_up=up-down;
	int cor_length=length-up;
	int cnt=(cor_length%real_up!=0?cor_length/real_up+1:cor_length/real_up);

	cout<<cnt+1<<endl;

	return 0;
}
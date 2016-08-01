#include <iostream>

using namespace std;

int counter;

int main(void)
{
	int n,k;
	while (cin>>n)
	{
		counter=0;
		cin>>k;

		int coupons=n;
		counter+=n;
		while (coupons>=k)
		{
			int new_chicken=coupons/k;
			counter+=new_chicken;
			coupons=coupons-k*new_chicken+new_chicken;
		}
		cout<<counter<<endl;
	}
	return 0;
}
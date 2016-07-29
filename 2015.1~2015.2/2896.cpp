#include <iostream>

using namespace std;

int main(void)
{
	int orange,apple,pineapple;
	int i,j,k;

	cin>>orange>>apple>>pineapple;
	cin>>i>>j>>k;

	float ro=((1.0f)*orange)/i;
	float ao=((1.0f)*apple)/j;
	float po=((1.0f)*pineapple)/k;
	float mini;

	if (ro<ao)
	{
		if (ro<po)
			mini=ro;
		else
			mini=po;
	}
	else
	{
		if (ao<po)
			mini=ao;
		else
			mini=po;
	}

	float r=orange-mini*i;
	float a=apple-mini*j;
	float p=pineapple-mini*k;

	cout<<r<<" "<<a<<" "<<p<<endl;

	return 0;
}
#include <iostream>

using namespace std;

int main(void)
{
	int N,num;
	cin>>N;
	int z=0;
	int o=0;
	for (int i=0;i<N;i++)
	{
		cin>>num;
		if (num==0)
			z++;
		else if (num==1)
			o++;
	}
	if (z>o)
		cout<<"Junhee is not cute!"<<endl;
	else
		cout<<"Junhee is cute!"<<endl;

	return 0;
}
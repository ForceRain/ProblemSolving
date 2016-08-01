#include <iostream>

using namespace std;

int main(void)
{
	long long N;
	long long a1,a2,a3;
	long long last;
	cin>>N;

	cin>>a1;
	cin>>a2;
	cin>>a3;

	if (N==3)
		last=a3;

	for (int i=0;i<N-3;i++)
		cin>>last;

	if (a2*a2==a1*a3)
		cout<<last*(a2/a1)<<endl;
	else
		cout<<last+(a2-a1)<<endl;

	return 0;
}
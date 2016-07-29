#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin>>N;

	unsigned long long sum=0;

	int ruler=1;
	int length=1;
	while (N>=ruler)
	{
		ruler*=10;
	}
	ruler/=10;
	
	int upper=1;
	int bef_upper=1;

	while (true)
	{
		upper*=10;
		if (ruler<upper)
			break;
		else
		{
			sum+=(upper-bef_upper)*length;
			length++;
			bef_upper=upper;
		}
	}

	sum+=(N-ruler+1)*length;

	cout<<sum<<endl;

	return 0;
}

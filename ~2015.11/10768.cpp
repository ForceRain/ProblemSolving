#include <iostream>

using namespace std;

int main(void)
{
	int M,D;
	cin>>M;
	cin>>D;

	if (M==2 && D==18)
	{
		cout<<"Special"<<endl;
		return 0;
	}
	else
	{
		if (M<2)
			cout<<"Before"<<endl;
		else if (M>2)
			cout<<"After"<<endl;
		else
		{
			if (D<18)
				cout<<"Before"<<endl;
			else
				cout<<"After"<<endl;
		}
	}


	return 0;
}
#include <iostream>

using namespace std;

int main(void)
{
	int maximum=-1;
	int minimum=10000000;
	int N,tmp;
	int upper_ptr=1;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>tmp;

		if (maximum<=tmp)
		{
			if (maximum==tmp)
				upper_ptr++;
			maximum=tmp;
		}

		if (minimum>=tmp)
		{
			minimum=tmp;
		}
	}

	if ((maximum+upper_ptr)>(minimum+N))
		cout<<maximum+upper_ptr+1<<endl;
	else
		cout<<minimum+N+1<<endl;

	return 0;
}
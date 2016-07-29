#include <iostream>

using namespace std;

void check_out(int number)
{
	int cnt=0;
	for (int divider=2;divider<=number;divider++)
	{
		cnt=0;
		while (true)
		{
			if (number%divider!=0)
				break;
			else
			{
				cnt++;
				number/=divider;
			}
		}
		
		if (cnt!=0)
			cout<<divider<<" "<<cnt<<endl;
	}
}

int main(void)
{
	int N,tmp;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		check_out(tmp);
	}

	return 0;
}
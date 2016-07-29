#include <iostream>

using namespace std;

int main(void)
{
	int times;
	cin>>times;

	int len;
	int tmp;
	int maximum=-1;
	int minimum=1000;

	for (int i=0;i<times;i++)
	{
		cin>>len;
		maximum=-1;
		minimum=1000;

		for (int k=0;k<len;k++)
		{
			cin>>tmp;

			if (tmp>maximum)
				maximum=tmp;

			if (tmp<minimum)
				minimum=tmp;
		}

		cout<<(maximum-minimum)*2<<endl;
	}

	return 0;
}
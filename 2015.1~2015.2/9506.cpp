#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(void)
{
	int num;
	while (true)
	{
		cin>>num;

		if (num==-1)
			break;

		int range=sqrt(num);
		vector<int> container;
		container.push_back(1);

		long long sum=1;
		//cout<<"range : "<<range<<endl;
		for (int i=2;i<=range;i++)
		{
			if (num%i==0)
			{
				container.push_back(i);
				sum+=i;
			}
		}
		
		int bef_size=container.size();
		for (int i=bef_size-1;i>0;i--)
		{
			container.push_back(num/container[i]);
			sum+=(num/container[i]);
		}

		if (sum==num)
		{
			cout<<num<<" = "<<container[0];
			for (int i=1;i<container.size();i++)
				cout<<" + "<<container[i];
			cout<<endl;
		}
		else
			cout<<num<<" is NOT perfect."<<endl;
	}
	return 0;
}
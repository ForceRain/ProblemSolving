#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <pair <double, int> > container;

bool my_compare(pair<double,int> a, pair<double,int> b)
{
	return a.first>b.first;
}

int main(void)
{
	int test,num;
	int a,b,c;
	cin>>test;

	for (int i=0;i<test;i++)
	{
		cin>>num;
		for (int j=0;j<num;j++)
		{
			cin>>a>>b>>c;
			double max_x=b/(2.0*(a));
			container.push_back(pair<double,int>(-a*max_x*max_x+b*max_x+c,j+1));
		}

		sort(container.begin(),container.end(),my_compare);
		cout<<container[0].second<<endl;
		container.erase(container.begin(),container.end());
	}

	return 0;
}
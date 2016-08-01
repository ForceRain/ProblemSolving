#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector < pair<int,int> > container;			// start,end

int main(void)
{
	int N,from,to;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>from>>to;
		container.push_back(pair<int,int>(from,to));
	}

	sort(container.begin(),container.end());

	int bef_s=container[0].first,bef_e=container[0].second;
	for (int i=1;i<container.size();i++)
	{
		if (bef_e>=container[i].first)		// overwrite
		{
			bef_e=container[i].second;
		}
		else
		{
			cout<<bef_s<<" "<<bef_e<<endl;
			bef_s=container[i].first;
			bef_e=container[i].second;
		}
	}
	cout<<bef_s<<" "<<bef_e<<endl;

	return 0;
}
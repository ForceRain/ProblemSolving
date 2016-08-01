#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector < pair<int,int> > container;

int main(void)
{
	int N,num;
	cin>>N;
	for (int i=1;i<=N;i++)
	{
		cin>>num;
		container.push_back(pair<int,int> (num,num-i) );
	}
	sort(container.begin(),container.end());
	int sz=container.size();
	for (int i=0;i<sz;i++)
		cout<<container[i].second<<endl;

	return 0;

}
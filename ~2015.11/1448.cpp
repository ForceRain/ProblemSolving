#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector <int> container;

int main(void)
{
	int N,num;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>num;
		container.push_back(num);
	}
	sort(container.begin(),container.end());
	int sz=container.size();
	int r3=container[sz-1];
	int r2=container[sz-2];
	int r1=container[sz-3];

	if (r3>=(r2+r1))
		cout<<-1<<endl;
	else
		cout<<(r3+r2+r1)<<endl;

	return 0;
}
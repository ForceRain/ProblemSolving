#include <iostream>
#include <vector>

using namespace std;

int ans[11]={0,1,2,3,4,5,1,2,3,4,5};
vector <int> container;

int main(void)
{
	int N;
	cin>>N;
	int num;
	for (int i=1;i<=N;i++)
	{
		bool ch=true;
		for (int j=1;j<=10;j++)
		{
			cin>>num;
			if (num!=ans[j])
				ch=false;
		}
		if (ch)
			container.push_back(i);
	}
	int sz=container.size();
	for (int j=0;j<sz;j++)
		cout<<container[j]<<endl;

	return 0;
}
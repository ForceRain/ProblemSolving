#include <iostream>
#include <set>
#include <string>

using namespace std;

set<string> container;

int main(void)
{
	int N;
	int remain=0;
	string name,operation;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>name>>operation;

		if (operation=="enter")
		{
			remain++;
			container.insert(name);
		}
		
		if (operation=="leave")
		{
			set<string>::iterator it=container.find(name);
			if (it!=container.end())
			{
				container.erase(it);
				remain--;
			}
		}
	}

	set<string>::reverse_iterator it_2=container.rbegin();
	for (;it_2!=container.rend();++it_2)
		cout<<*it_2<<endl;

	return 0;
}
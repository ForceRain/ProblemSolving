#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector< string > container;

int main(void)
{
	string input;
	string target;
	cin>>target;
	int N;
	cin>>N;
	int cnt=0;
	for (int i=0;i<N;i++)
	{
		cnt=0;
		cin>>input;
		for (int j=0;j<9;j++)
		{
			if (target[j]=='*')
				cnt++;
			else
			{
				if (target[j]==input[j])
					cnt++;
			}
		}
		if (cnt==9)
			container.push_back(input);
	}
	int sz=container.size();
	cout<<sz<<endl;
	for (int i=0;i<sz;i++)
		cout<<container[i]<<endl;

	return 0;
}

#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> container;

int main(void)
{
	int N,input;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>input;
		if (input==0)
		{
			if (container.empty())
				cout<<"0"<<endl;
			else
			{
				cout<<-container.top()<<endl;
				container.pop();
			}
		}
		else
			container.push(-input);
	}

	return 0;
}
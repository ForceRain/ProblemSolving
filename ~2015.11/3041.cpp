#include <iostream>
#include <vector>

using namespace std;

vector<pair<int,int>> container;
char input[10];

int my_abs(int value)
{
	return (value<0)?(-value):value;
}

int main(void)
{
	for (int i=0;i<15;i++)
	{
		container.push_back(pair<int,int>(i/4,i%4));
	}

	int hamilton_sum=0;
	pair<int,int> tmp;
	for (int i=0;i<4;i++)
	{
		cin>>input;
		for (int j=0;j<4;j++)
		{
			if (input[j]!='.')
			{
				tmp=container[input[j]-'A'];
				hamilton_sum+=my_abs(i-tmp.first);
				hamilton_sum+=my_abs(j-tmp.second);
			}
		}
	}

	cout<<hamilton_sum<<endl;
	return 0;
}
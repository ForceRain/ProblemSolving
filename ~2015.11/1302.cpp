#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string,int> container;
string maximum_name;

int main(void)
{
	int N;
	int maxi=-1;
	string input_book;
	cin>>N;
	for (int i=0;i<N;i++)
	{
		cin>>input_book;
		map<string,int>::iterator it=container.find(input_book);
		if (it==container.end())
		{
			container.insert(pair<string,int>(input_book,0));
			it=container.find(input_book);
		}
		
		(*it).second++;
		if (maxi<=((*it).second))
		{
			if (maxi==(*it).second)
			{
				if (maximum_name>(*it).first)
					maximum_name=(*it).first;
			}
			else
			{
				maximum_name=(*it).first;
				maxi=(*it).second;
			}
		}
	}
	cout<<maximum_name<<endl;

	return 0;
}
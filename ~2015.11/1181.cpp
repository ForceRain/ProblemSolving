#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> container;
char input_buffer[1000];

bool my_compare(string a, string b)
{
	if (a.length()>b.length())
		return false;
	else if (a.length()<b.length())
		return true;
	else
	{
		return a<b;
	}
}

int main(void)
{
	int N;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>input_buffer;
		container.push_back(string(input_buffer));
	}

	sort(container.begin(),container.end(),my_compare);
	string bef="";
	for (int i=0;i<container.size();i++)
	{
		if (bef!=container[i])
			cout<<container[i]<<endl;
		bef=container[i];
	}

	return 0;
}
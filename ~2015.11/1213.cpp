#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int counter[26];

vector <pair<int,char> > container;

bool my_compare(pair<int,char> a, pair<int,char> b)
{
	if (a.first>b.first)
		return true;
	else if (a.first<b.first)
		return false;
	else
		return a.second<b.second;
}

int main(void)
{
	string input;
	cin>>input;

	int len=input.length();
	for (int i=0;i<len;i++)
		counter[input[i]-'A']++;

	for (int i=0;i<26;i++)
		container.push_back(pair<int,char>(counter[i],i+'A'));
//	sort(container.begin(),container.end(),my_compare);

	string head_result="";
	string tail_result="";
	string body_result="";
	bool nope=false;
	for (int i=0;i<26;i++)
	{
		int loop=container[i].first;
		char value=container[i].second;
		int looping=loop/2;
		for (int j=0;j<looping;j++)
		{
			head_result+=value;
			tail_result+=value;
		}
		if ((loop%2)!=0)
		{
			if (body_result.length()!=0)
				nope=true;
			body_result+=value;
		}
	}
	if (nope)
		cout<<"I'm Sorry Hansoo"<<endl;
	else
	{
		int h_len=head_result.length();
		for (int i=0;i<h_len;i++)
			cout<<head_result[i];
		cout<<body_result;
		for (int i=h_len-1;i>=0;i--)
			cout<<tail_result[i];
		cout<<endl;
	}
	
	return 0;
}
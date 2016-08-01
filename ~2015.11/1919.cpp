#include <iostream>
#include <string>

using namespace std;

int str1[26];
int str2[26];

int my_abs(int x)
{
	return (x<0)?(-x):x;
}

int main(void)
{
	string input;
	cin>>input;
	int len=input.length();
	for (int i=0;i<len;i++)
		str1[input[i]-'a']++;
	cin>>input;
	len=input.length();
	for (int i=0;i<len;i++)
		str2[input[i]-'a']++;

	int change=0;
	for (int i=0;i<26;i++)
	{
		if (str1[i]!=str2[i])
			change+=my_abs(str1[i]-str2[i]);
	}
	cout<<change<<endl;

	return 0;
}
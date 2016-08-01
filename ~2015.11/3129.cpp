#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string target;
	string ke;
	string output="";
	cin>>target;
	cin>>ke;

	int key_ptr=0;
	int key_len=ke.length();
	int ln=target.length();
	for (int i=0;i<ln;i++)
	{
		int val=target[i]-'a'+ke[key_ptr++]-'a';
		if (val>25)
			val%=26;
		output+=(val+'a');
		if (key_ptr>=key_len)
			key_ptr=0;
	}
	cout<<output<<endl;

	return 0;
}
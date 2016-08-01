#include <iostream>
#include <string>

using namespace std;

string input_stream;

int main(void)
{
	cin>>input_stream;
	int len=input_stream.length();
	int cnt=0;
	for (int i=0;i<len;i++)
	{
		char c=input_stream[i];
		if ( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' )
			cnt++;
	}
	cout<<cnt<<endl;

	return 0;
}
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

string input_stream;

int main(void)
{
	cin>>input_stream;
	int len=input_stream.length();
	int obj=len/2;
	int nope=1;

	for (int i=0;i<obj;i++)
	{
		if (input_stream[i] != input_stream[len-i-1])
			nope=0;
	}
	cout<<nope<<endl;

	return 0;
}
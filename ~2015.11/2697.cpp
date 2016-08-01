#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

char input_stream[100];

int main(void)
{
	int testcase;
	cin>>testcase;

	for (int i=0;i<testcase;i++)
	{
		cin>>input_stream;
		int len=strlen(input_stream);
		bool nope=next_permutation(input_stream,input_stream+len);

		if (!nope)
			cout<<"BIGGEST"<<endl;
		else
			cout<<input_stream<<endl;
	}

	return 0;
}
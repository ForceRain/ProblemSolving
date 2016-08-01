#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

char input_stream[100];

int main(void)
{
	cin>>input_stream;

	int len=strlen(input_stream);
	if (!next_permutation(input_stream,input_stream+len))
		cout<<0<<endl;
	else
		cout<<input_stream<<endl;

	return 0;
}
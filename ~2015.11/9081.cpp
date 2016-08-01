#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

char input_buffer[1000];
char original[1000];

int main(void)
{
	int N;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>input_buffer;

		int len=strlen(input_buffer);
		strcpy(original,input_buffer);
		if (!next_permutation(input_buffer,input_buffer+len))
			cout<<original<<endl;
		else
			cout<<input_buffer<<endl;
	}
	

	return 0;
}
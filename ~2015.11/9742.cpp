#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

char input_buffer[15];
char input_first[15];

int main(void)
{
	int want_num;
	while (cin>>input_buffer)
	{
		int len=strlen(input_buffer);
		strcpy(input_first,input_buffer);
		cin>>want_num;
		
		int counter=1;
		bool check_it=true;
		while ((counter<want_num) && (check_it=next_permutation(input_buffer,input_buffer+len)))
			counter++;

		if (!check_it)
			cout<<input_first<<" "<<want_num<<" = "<<"No permutation"<<endl;
		else
			cout<<input_first<<" "<<want_num<<" = "<<input_buffer<<endl;
	}
}
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

char tmp_buffer[1000];
char input_buffer[1000];

int main(void)
{
	gets(input_buffer);
	string result="";
	int len=strlen(input_buffer);

	for (int i=0;i<len;i+=2)
	{
		int value;
		tmp_buffer[0]=input_buffer[i];
		tmp_buffer[1]=input_buffer[i+1];
		sscanf(tmp_buffer,"%X",&value);
		sprintf(tmp_buffer,"%c",value);
		result+=tmp_buffer[0];
	}
	printf("%s\n",result.c_str());

	return 0;
}
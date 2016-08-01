#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

char tmp_buffer[1000];
char input_buffer[100];

int main(void)
{
	gets(input_buffer);
	string result="";
	int len=strlen(input_buffer);

	for (int i=0;i<len;i++)
	{
		sprintf(tmp_buffer,"%X",input_buffer[i]);
		result+=tmp_buffer[0];
		result+=tmp_buffer[1];
	}
	printf("%s",result.c_str());

	return 0;
}
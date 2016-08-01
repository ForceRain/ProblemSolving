#include <iostream>
#include <cstdio>

using namespace std;

char my_keyboard[128];
char keyboard_space[4][15]=\
{"`1234567890-=","\tQWERTYUIOP[]\\","ASDFGHJKL;'","ZXCVBNM,./"};

int main(void)
{
	char c;


	while ((c=getchar())!=EOF)
	{
		if (c==' ')
			cout<<" ";

	}
	return 0;
}
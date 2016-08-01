#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char input[256];

int check_char(int idx)
{
	if (('A'<=input[idx]) && (input[idx]<='Z'))
		return input[idx]-'A'+1;
	else
		return 0;
}

int main(void)
{
	int length=0;
	long long output=0;

	while (true)
	{
		output=0;
		gets(input);

		if (strcmp(input,"#")==0)
			break;

		length=strlen(input);
		for (int i=0;i<length;i++)
		{
			output+=check_char(i)*(i+1);
		}

		cout<<output<<endl;
	}

	return 0;
}
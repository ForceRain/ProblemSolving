#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

using namespace std;

char input_line[100];
char *str_mapping[256];

int main(void)
{
	str_mapping[' ']="%20";
	str_mapping['!']="%21";
	str_mapping['$']="%24";
	str_mapping['%']="%25";
	str_mapping['(']="%28";
	str_mapping[')']="%29";
	str_mapping['*']="%2a";

	while (true)
	{
		gets(input_line);
		if (strcmp(input_line,"#")==0)
			break;

		int len=strlen(input_line);
		for (int j=0;j<len;j++)
		{
			if (str_mapping[input_line[j]]!=NULL)
				cout<<str_mapping[input_line[j]];
			else
				cout<<input_line[j];
		}
		cout<<endl;
	}

	return 0;
}
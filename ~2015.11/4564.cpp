#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char buff[7];

int main(void)
{
	int input;
	int value=1;
	while (true)
	{
		cin>>input;
		if (input==0)
			break;

		sprintf(buff,"%d",input);
		printf("%s ",buff);
		while (strlen(buff)!=1)
		{
			value=1;
			for (int i=0;i<strlen(buff);i++)
			{
				value*=buff[i]-'0';
			}
			sprintf(buff,"%d",value);
			printf("%s ",buff);
		}
		printf("\n");
	}

	return 0;
}
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

char input[1001];

int main(void)
{
	while (true)
	{
		cin>>input;
		if (strcmp(input,"0")==0)
			break;

		int res;
		while (true)
		{
			int len=strlen(input);
			int summation=0;
			for (int i=0;i<len;i++)
				summation+=(input[i]-'0');
			if (summation<10)
			{
				res=summation;
				break;
			}
			else
				sprintf(input,"%d",summation);
		}
		cout<<res<<endl;
	}
	return 0;
}
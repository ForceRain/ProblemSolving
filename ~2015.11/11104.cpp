#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char input_buffer[100];

int main(void)
{
	int test;
	scanf("%d",&test);
	for (int i=0;i<test;i++)
	{
		scanf("%s",input_buffer);
		int val=1;
		int summation=0;
		int len=strlen(input_buffer);
		for (int j=len-1;j>=0;j--)
		{
			if (input_buffer[j] == '1')
				summation+=val;
			val*=2;
		}
		printf("%d\n",summation);
	}
	return 0;
}
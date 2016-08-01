#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <functional>

using namespace std;

char input_stream[100001];

int main(void)
{
	scanf("%s",input_stream);

	int len=strlen(input_stream);
	int digit_sum=0;
	bool digit_ok=false,zero_ok=false;
	for (int i=0;i<len;i++)
		digit_sum+=(input_stream[i]-'0');

	if ((digit_sum%3)==0)
	{
		digit_ok=true;
		sort(input_stream,input_stream+len,greater<char>());
	//	printf("%s\n",input_stream);
		do 
		{
			if (input_stream[len-1]=='0')
			{
				zero_ok=true;
				break;
			}
		}
		while (prev_permutation(input_stream,input_stream+len));
	}

	if (digit_ok && zero_ok)
		printf("%s\n",input_stream);
	else
		printf("-1\n");

	return 0;
}
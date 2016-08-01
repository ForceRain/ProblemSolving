#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

char input_stream[310];

int main(void)
{
	scanf("%s",input_stream);
	int len=strlen(input_stream);
	int cnt=0;
	for (int i=0;i<len;i+=3)
		cnt+=((int)(input_stream[i]!='P')+(int)(input_stream[i+1]!='E')+(int)(input_stream[i+2]!='R'));

	printf("%d\n",cnt);

	return 0;
}

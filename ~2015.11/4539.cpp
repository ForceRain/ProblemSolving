#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input[20];
char output[20];

void round_or_carry()
{
	
}

int main(void)
{
	int N;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		memset(input,0,sizeof(input));
		memset(output,0,sizeof(output));
		cin>>input;
		if (strlen(input)==1)
			cout<<input<<endl;
		else
			round_or_carry();
	}

	return 0;
}
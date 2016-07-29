#include <iostream>

using namespace std;

int maximum;

void max_halistone(int input)
{
	maximum=input;

	while (input!=1)
	{
		if ((input%2)!=0)
			input=3*input+1;
		else
			input=input/2;

		if (input>maximum)
			maximum=input;
	}
}

int main(void)
{
	int N;
	while (true)
	{
		cin>>N;
		if (N==0)
			break;

		max_halistone(N);
		cout<<maximum<<endl;
	}

	return 0;
}
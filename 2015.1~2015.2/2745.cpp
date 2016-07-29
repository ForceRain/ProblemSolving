#include <iostream>
#include <cstring>

using namespace std;

char input[100];
int numbering;

long long location(int position)
{
	long long output=1;
	for (int i=0;i<position;i++)
	{
		output*=numbering;
	}
	return output;
}

int transformation(char input)
{
	if (!(('A'<=input) && (input<='Z')))
	{
		return input-'0';
	}
	else
	{
		return input-'A'+10;
	}
}

int main(void)
{
	cin>>input>>numbering;

	long long sum=0;
	int length=strlen(input);
	for (int i=0;i<length;i++)
	{
		sum+=location(i)*transformation(input[length-i-1]);
	}

	cout<<sum<<endl;

	return 0;
}
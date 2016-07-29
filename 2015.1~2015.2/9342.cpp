#include <iostream>
#include <cstring>

using namespace std;

char input[204];

bool checkABCDEF(int j)
{
	if ((input[j]=='A') || (input[j]=='B') || (input[j]=='C') || (input[j]=='D') || (input[j]=='E') || (input[j]=='F'))
		return true;

	return false;
}

bool checkAFC()
{
	int str_len=strlen(input);
	bool checkA=false;
	bool checkC=false;
	bool checkF=false;

	for (int i=0;i<str_len;i++)
	{
		if (input[i]=='A')
			checkA=true;
		if (input[i]=='C')
			checkC=true;
		if (input[i]=='F')
			checkF=true;
	}

	return checkA && checkC && checkF;
}

int main(void)
{
	int N;
	cin>>N;
	
	for (int i=0;i<N;i++)
	{
		cin>>input;
		int str_len=strlen(input);

		if (checkAFC())
			cout<<"Infected!"<<endl;
		else
			cout<<"Good"<<endl;
	}

	return 0;
}
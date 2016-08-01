#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

char input_stream[25];

int main(void)
{
	cin>>input_stream;
	int summation=0;
	int str_len=strlen(input_stream);
	for (int i=0;i<str_len;i++)
	{
		if (('a'<=input_stream[i]) && (input_stream[i]<='z'))
			summation+=input_stream[i]-'a'+1;
		if (('A'<=input_stream[i]) && (input_stream[i]<='Z'))
			summation+=input_stream[i]-'A'+27;
	}

	int limit=sqrt(summation);
	bool nope=false;
	for (int i=2;i<=limit;i++)
	{
		if ((summation%i)==0)
			nope=true;
	}
	if (nope)
		cout<<"It is not a prime word."<<endl;
	else
		cout<<"It is a prime word."<<endl;

	return 0;
}
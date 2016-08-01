#include <iostream>
#include <cstring>

using namespace std;

char input[333336];

void f_you_out(char c)
{
	switch(c)
	{
	case '0' :
		cout<<"0";
		break;
	case '1' :
		cout<<"1";
		break;
	case '2' :
		cout<<"10";
		break;
	case '3' :
		cout<<"11";
		break;
	case '4' :
		cout<<"100";
		break;
	case '5' :
		cout<<"101";
		break;
	case '6' :
		cout<<"110";
		break;
	case '7' :
		cout<<"111";
		break;
	}
}

void you_out(char c)
{
	switch(c)
	{
	case '0' :
		cout<<"000";
		break;
	case '1' :
		cout<<"001";
		break;
	case '2' :
		cout<<"010";
		break;
	case '3' :
		cout<<"011";
		break;
	case '4' :
		cout<<"100";
		break;
	case '5' :
		cout<<"101";
		break;
	case '6' :
		cout<<"110";
		break;
	case '7' :
		cout<<"111";
		break;
	}
}

int main(void)
{
	cin>>input;

	int length=strlen(input);

	f_you_out(input[0]);

	for (int i=1;i<length;i++)
	{
		you_out(input[i]);
	}
	cout<<endl;

	return 0;
}
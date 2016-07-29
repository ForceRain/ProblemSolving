#include <iostream>

using namespace std;

bool find_prime(int in)
{
	int times=in/2;
	for (int i=2;i<times;i++)
	{
		if (in%i==0)
			return false;
	}
	return true;
}

void give_output(int input)
{
	bool find=false;
	int i,j=0;
	for (i=3;i<=input;i++)
	{
		j=input-i;
		if (i>j)
			break;

		if (find_prime(i) && find_prime(j))
		{
			find=true;
			break;
		}
	}

	if (!find)
		cout<<"Goldbach's conjecture is wrong."<<endl;
	else
		cout<<input<<" = "<<" "<<i<<" + "<<j<<endl;
}

int main(void)
{
	int input;
	while (true)
	{
		cin>>input;
		if (input==0)
			break;

		give_output(input);
	}

	return 0;
}
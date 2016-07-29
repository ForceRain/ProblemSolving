#include <iostream>
#include <cstring>

using namespace std;

char input[10004];

int sqrt_5426(int in)
{
	for (int i=1;i<=in;i++)
	{
		if (i==(in/i))
			return i;
	}
}

int main(void)
{
	int tc;
	int length,tot_length;
	cin>>tc;

	for (int i=0;i<tc;i++)
	{
		cin>>input;
		tot_length=strlen(input);
		length=sqrt_5426(tot_length);

		for (int start_pointer=length-1;start_pointer>=0;start_pointer--)
		{
			int move_ptr=start_pointer;
			while (move_ptr<tot_length)
			{
				cout<<input[move_ptr];
				move_ptr+=length;
			}
		}
		cout<<endl;
	}

	return 0;
}
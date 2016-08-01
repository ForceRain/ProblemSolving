#include <iostream>
#include <cstring>

using namespace std;

char space[5][100];
char input_buffer[100];

int main(void)
{
	int max_l=-1;
	for (int i=0;i<5;i++)
	{
		cin>>input_buffer;
		strcpy(space[i],input_buffer);

		if ((int)strlen(input_buffer)>(int)max_l)
			max_l=strlen(input_buffer);
	}
	for (int i=0;i<max_l;i++)
	{
		for (int j=0;j<5;j++)
		{
			if (space[j][i])
				cout<<space[j][i];
		}
	}
	cout<<endl;

	return 0;
}
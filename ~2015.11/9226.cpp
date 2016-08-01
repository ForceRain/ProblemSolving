#include <iostream>
#include <cstring>

using namespace std;

char input[24];

int main(void)
{
    while (true)
	{
		cin>>input;

		if (strcmp(input,"#")==0)
			break;

		int length=strlen(input);
		int position=0;

		for (int i=0;i<length;i++)
		{
			if (input[i]=='a' || input[i]=='e' || input[i]=='i' || input[i]=='o' || input[i]=='u')
			{
				position=i;
				break;
			}
		}

		cout<<input+position;
		
		for (int i=0;i<position;i++)
			cout<<input[i];

		cout<<"ay"<<endl;
	}
}
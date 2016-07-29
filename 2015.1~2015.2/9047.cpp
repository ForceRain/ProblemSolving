#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

char input[5];
char maxi[5];
char mini[5];

bool checking()
{
	int first=atoi(maxi);
	int second=atoi(mini);

	if ((first-second)==7641)
		return true;
	else
		itoa(first-second,input,10);
	return false;
}

int main(void)
{
	int N;
	cin>>N;

	int cnt=0;
	for (int i=0;i<N;i++)
	{
		cin>>input;

		cout<<input<<endl;
		cnt=0;
		while (true)
		{
			for (int i=0;i<4;i++)
			{
				for (int j=3;j>=i;j--)
				{
					if (input[j]>input[i])
					{
						char tmp=input[j];
						input[j]=input[i];
						input[i]=tmp;
					}
				}
			}
			strcpy(maxi,input);

			for (int i=0;i<4;i++)
			{
				for (int j=3;j>=0;j--)
				{
					if (input[j]<input[i])
					{
						char tmp=input[j];
						input[j]=input[i];
						input[i]=tmp;
					}
				}
			}
			strcpy(mini,input);

			if (checking())
				break;
		}
		cout<<cnt<<endl;
	}

	return 0;
}
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main(void)
{
	int N;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		vector<char> data;
    
		char input[55]={'\0'};
		cin>>input;
    
		int minus_cnt=0;
		int length=strlen(input);
    
		for (int i=0;i<length;i++)
		{
			if (input[i]=='(')
			{
				data.push_back(input[i]);
			}
			else 
			{
				if (!data.empty())
            		data.pop_back();
				else
					minus_cnt++;
			}
		}
    
		if (!data.empty() || minus_cnt!=0)
		{
			cout<<"NO"<<endl;
		}
		else
			cout<<"YES"<<endl;
	}
    return 0;
}
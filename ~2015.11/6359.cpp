#include <iostream>
#include <cstring>

using namespace std;

int space[101];

int main(void)
{
	int test;
	int N;
	cin>>test;
	for (int i=0;i<test;i++)
	{
		memset(space,0,sizeof(space));
		cin>>N;
		for (int i=1;i<=N;i++)
		{
			for (int ptr=i;ptr<=N;ptr+=i)
				space[ptr]^=1;
		}
		int cnt=0;
		for (int i=1;i<=N;i++)
			if (space[i]==1)
				cnt++;
		cout<<cnt<<endl;
	}


	return 0;
}
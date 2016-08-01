#include <iostream>
#include <cstdio>

using namespace std;

int space[1001];

int main(void)
{
	int N;
	cin>>N;

	for (int i=0;i<N;i++)
		scanf("%x",&space[i]);

	bool find=false;

	for (int i=0;i<N;i++)
	{
		find=false;
		for (int j='0';j<='9';j++)
		{
			//cout<<(space[i]^j)<<endl;
			if ('a'<=(space[i]^j) && (space[i]^j)<='z')
				find=true;
		}
		if (find)
			cout<<"-";
		else
			cout<<".";
	}
	cout<<endl;

	return 0;
}
#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin>>N;

	int start,end;

	for (int i=0;i<N;i++)
	{
		cin>>start>>end;

		long long output=0;
		for (int j=start;j<=end;j++)
			output^=j;

		cout<<output<<endl;
	}

	return 0;
}
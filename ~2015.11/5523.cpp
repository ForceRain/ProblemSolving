#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin>>N;
	int a_cnt=0,b_cnt=0;
	int a,b;

	for (int i=0;i<N;i++)
	{
		cin>>a>>b;
		if (a>b)
			a_cnt++;
		else if (a<b)
			b_cnt++;
	}

	cout<<a_cnt<<" "<<b_cnt<<endl;

	return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

int topings[101];

int main(void)
{
	int N,A,B,C;
	cin>>N;
	cin>>A>>B;
	cin>>C;
	for (int i=0;i<N;i++)
		cin>>topings[i];
	sort(topings,topings+N);

	int top_cnt=1;
	int head=C;
	int equation=0;
	double summation=0.0;
	for (int j=N-1;j>=0;j--)
	{
		equation=A+B*top_cnt;
		head=head+topings[j];
		double val=((double)head/(double)equation);
//		cout<<head<<endl;
//		cout<<val<<endl;
		if (val>=summation)
			summation=val;
		else
			break;
		top_cnt++;
	}
	cout<<(int)summation<<endl;

	return 0;
}
#include <iostream>

using namespace std;

int DP[1000000];

int main(void)
{
	DP[1]=0;
	DP[2]=1;
	DP[3]=1;
	int N,c1,c2,c3;
	for (int i=4;i<1000001;i++)
	{
		c1=0x7FFFFFFF;
		c2=0x7FFFFFFF;
		c3=0x7FFFFFFF;
		if (i%2==0)
			c1=DP[i/2]+1;
		if (i%3==0)
			c2=DP[i/3]+1;
		c3=DP[i-1]+1;

		DP[i]=(c1<c2)?((c1<c3)?c1:c3):((c2<c3)?c2:c3);
	}
	cin>>N;
	cout<<DP[N]<<endl;

	return 0;
}
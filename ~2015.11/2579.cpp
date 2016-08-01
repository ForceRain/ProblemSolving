#include <iostream>

using namespace std;

int stairs[301];
int DP[301];
int one_check[301];

int main(void)
{
	int N;
	cin>>N;
	for (int i=1;i<=N;i++)
		cin>>stairs[i];

	DP[1]=stairs[1];
	one_check[1]=1;
	for (int i=2;i<=N;i++)
	{
		int one_val,two_val;
		if (one_check[i-1]>=2)
			one_val=-1;
		else
			one_val=DP[i-1]+stairs[i];
		two_val=DP[i-2]+stairs[i];

		if (one_val>two_val)
		{
			cout<<"one : "<<i<<", "<<one_val<<endl;
			one_check[i]=one_check[i-1]+1;
			DP[i]=one_val;
		}
		else
		{
			cout<<"two : "<<i<<", "<<two_val<<endl;
			one_check[i]=1;
			DP[i]=two_val;
		}
	}
	cout<<DP[N]<<endl;

	return 0;
}
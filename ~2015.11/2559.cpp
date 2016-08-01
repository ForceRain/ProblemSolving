#include <iostream>

using namespace std;

int space[100001];

int main(void)
{
	int N,K,tmp,bef_sum=0,maximum=0x80000000;
	cin>>N>>K;
	
	for (int i=1;i<=N;i++)
	{
		cin>>tmp;
		space[i]=tmp+bef_sum;
		bef_sum+=tmp;
	}

	int start_ptr=K;
	for (;start_ptr<=N;start_ptr++)
	{
		if ((space[start_ptr]-space[start_ptr-(K)])>maximum)
			maximum=space[start_ptr]-space[start_ptr-(K)];
	}
	
	cout<<maximum<<endl;

	return 0;
}
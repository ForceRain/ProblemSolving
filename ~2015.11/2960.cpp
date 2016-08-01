#include <iostream>

using namespace std;

int era[1001];

int main(void)
{
	int N,K;
	cin>>N>>K;

	int cnt=0,num,prime=2,prime_ptr=2,prime_up=2;
	
	while (cnt<K)
	{
		if ((prime_ptr<=N) && (era[prime_ptr]==0))
		{
			era[prime_ptr]++;
			num=prime_ptr;
			prime_ptr+=prime_up;
	//		cout<<prime_up<<endl;
			cnt++;
		}
		else if (prime_ptr>N)
		{
			for (int j=3;j<1001;j++)
			{
				if (era[j]==0)
				{
					prime=j;
					prime_ptr=j;
					prime_up=j;
					break;
				}
			}
		}
		else
			prime_ptr+=prime_up;
	}

	cout<<num<<endl;

	return 0;
}
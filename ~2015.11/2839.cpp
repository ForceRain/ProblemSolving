#include <iostream>

using namespace std;

int knapsack[5001];
bool nope[5001];

int get_min(int a,int b)
{
	return (a<b)?a:b;
}

int main(void)
{
	int N;
	cin>>N;

	for (int i=0;i<5001;i++)
		knapsack[i]=0x7FF00000;
	
	knapsack[0]=0;
	knapsack[3]=1;
	nope[3]=false;
	nope[4]=true;
	for (int i=5;i<5001;i++)
	{
		if (knapsack[i-3]==0x7FF00000 && knapsack[i-5]==0x7FF00000)
			nope[i]=true;
		else
			knapsack[i]=get_min(knapsack[i-3],knapsack[i-5])+1;
	}
	if (nope[N])
		cout<<-1<<endl;
	else
		cout<<knapsack[N]<<endl;

	return 0;
}
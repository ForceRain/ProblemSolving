#include <iostream>

using namespace std;

int item_space[21];
int N;
int goal;
int cnt=0;

void sos(int sum,int stage)
{
	if (stage==N)
	{
		if (goal==sum)
			cnt++;
	}
	else
	{
		sos(sum+item_space[stage+1],stage+1);
		sos(sum,stage+1);
	}
}

int main(void)
{
	cin>>N;
	cin>>goal;

	for (int i=1;i<=N;i++)
		cin>>item_space[i];

	sos(0,0);
	if (goal==0)
		cnt--;

	cout<<cnt<<endl;

	return 0;
}
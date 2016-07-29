#include <iostream>

using namespace std;

int total_cnt=0;
int coin[101];
int N;

void find(int value)
{
	if (value>=0)
	{
		if (value==0)
			total_cnt++;
		else
		{
			for (int i=N-1;i>=0;i--)
			{
				find(value-coin[i]);
			}
		}
	}
}

int main(void)
{
	int tmp;
	int value;
	cin>>N>>value;

	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		coin[i]=tmp;
	}
	for (int i=N-1;i>=0;i--)
	{
		find(value-coin[i]);
	}

	cout<<total_cnt<<endl;

	return 0;
}
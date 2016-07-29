#include <iostream>

using namespace std;

int item[20];
int goal;
int cnt=0;
int N;

void sum_of_subset(int tem,int idx)
{
	if (idx<N)
	{
		if (tem==goal)
			cnt++;
		else
		{
			sum_of_subset(tem+item[idx],idx+1);
			sum_of_subset(tem,idx+1);
		}
	}
}

int main(void)
{
	int tmp;
	cin>>N>>goal;

	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		item[i]=tmp;
	}

	sum_of_subset(0,0);

	cout<<cnt<<endl;

	return 0;
}
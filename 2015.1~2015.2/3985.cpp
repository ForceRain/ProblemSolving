#include <iostream>

using namespace std;

int L[1001];

int main(void)
{
	int length;
	int audi;
	cin>>length;
	cin>>audi;

	int from,to;
	int pre_max_length=-1;
	int pre_max_audi=-1;

	for (int i=1;i<=audi;i++)
	{
		cin>>from>>to;
		int tmp=to-from+1;
		if (pre_max_length<tmp)
		{
			pre_max_length=tmp;
			pre_max_audi=i;
		}
		for (int j=from;j<=to;j++)
		{
			if (L[j]==0)
				L[j]=i;
		}
	}

	int after_max_length=-1;
	int after_max_audi=-1;

	for (int i=1;i<=audi;i++)
	{
		int cnt=0;
		for (int j=1;j<=length;j++)
		{
			if (L[j]==i)
				cnt++;
		}
		if (after_max_length<cnt)
		{
			after_max_length=cnt;
			after_max_audi=i;
		}
	}

	cout<<pre_max_audi<<endl;
	cout<<after_max_audi<<endl;

	return 0;
}
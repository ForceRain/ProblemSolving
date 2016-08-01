#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string not_heard[500000];
string not_seen[500000];
string both[500000];

int main(void)
{
	int N,M;
	string tmp;
	cin>>N>>M;

	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		not_heard[i]=tmp;
	}

	for (int j=0;j<M;j++)
	{
		cin>>tmp;
		not_seen[j]=tmp;
	}

	sort(not_heard,not_heard+N);
	sort(not_seen,not_seen+M);

	int h_ptr=0;
	int s_ptr=0;
	int b_ptr=0;
	while (h_ptr<N && s_ptr<M)
	{
		if (not_heard[h_ptr]==not_seen[s_ptr])
		{
			both[b_ptr++]=not_heard[h_ptr];
			h_ptr++;s_ptr++;
		}
		else if (not_heard[h_ptr]<not_seen[s_ptr])
			h_ptr++;
		else
			s_ptr++;
	}

	cout<<b_ptr<<endl;
	for (int k=0;k<b_ptr;k++)
		cout<<both[k]<<endl;

	return 0;
}
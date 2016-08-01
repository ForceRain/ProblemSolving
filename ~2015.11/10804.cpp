#include <iostream>

using namespace std;

int tmp[21];
int space[21];

void my_reverse(int start,int end)
{
	int tmp_ptr=0;
	for (int i=end;i>=start;i--)
		tmp[tmp_ptr++]=space[i];
	tmp_ptr=0;
	for (int i=start;i<=end;i++)
		space[i]=tmp[tmp_ptr++];
}

int main(void)
{
	for (int i=0;i<21;i++)
		space[i]=i;
	
	int start,end;
	for (int i=0;i<10;i++)
	{
		cin>>start>>end;
		my_reverse(start,end);
	}

	for (int i=1;i<21;i++)
		cout<<space[i]<<" ";
	cout<<endl;

	return 0;
}
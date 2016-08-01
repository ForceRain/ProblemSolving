#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin>>N;
	int bef,tmp;
	int cnt=0;

	cin>>tmp;
	bef=tmp;
	for (int i=1;i<N;i++)
	{
		cin>>tmp;
		if (bef>tmp)
			cnt++;
		bef=tmp;
	}
	
	cout<<cnt+1<<endl;

	return 0;
}
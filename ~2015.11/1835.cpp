#include <iostream>

using namespace std;

int space[1001];

int main(void)
{
	int N;
	cin>>N;

	int assign_num=0;
	int assign_ptr=1;
	int mov_ptr=1;
	while (assign_num<N)
	{
		int j=0;
		while (true)
		{
			if (space[assign_ptr]==0)
				j++;
			if (j>mov_ptr)
				break;

			if (assign_ptr>=N)
				assign_ptr=1;
			else
				assign_ptr++;
//			cout<<"assign_ptr : "<<assign_ptr<<endl;
		}
		space[assign_ptr]=assign_num+1;
		assign_num++;
		mov_ptr++;
	}

	for (int i=1;i<=N;i++)
		cout<<space[i]<<" ";
	cout<<endl;	

	return 0;
}
#include <iostream>

using namespace std;

int max_sum=0;
int arr[301];
int length;

void stair(int position,int val)
{
	if (position<=length)
	{
		if (position==length)
		{
			if (val>max_sum)
				max_sum=val;
		}
		else
		{
			stair(position+1,val+arr[position+1]);
			stair(position+2,val+arr[position+2]);
		}
	}
}

int main(void)
{
	int N;
	cin>>N;

	length=N-1;

	int num;
	for (int i=0;i<N;i++)
	{
		cin>>num;
		arr[i]=num;
	}

	stair(0,0);

	cout<<max_sum<<endl;

	return 0;
}
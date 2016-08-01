#include <iostream>

using namespace std;

int main(void)
{
	int maxi=-1;
	int N;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		int f_cnt=0,f_pos;
		int t_cnt=0,t_pos;
		int d_cnt=0,d_pos1=-1,d_pos2;
		int o_pos;
		int summation=0;
		int arr[7]={0};
		int num;
		for (int i=0;i<4;i++)
		{
			cin>>num;
			arr[num]++;
		}
		for (int i=1;i<=6;i++)
		{
			if (arr[i]==4)
			{
				f_cnt=1;
				f_pos=i;
			}
			if (arr[i]==3)
			{
				t_cnt=1;
				t_pos=i;
			}
			if (arr[i]==2)
			{
				d_cnt++;
				if (d_pos1!=-1)
					d_pos2=i;
				else
					d_pos1=i;
			}
			if (arr[i]==1)
				o_pos=i;
		}
		if (f_cnt==1)
			summation=50000+f_pos*5000;
		else if (t_cnt==1)
			summation=10000+t_pos*1000;
		else if (d_cnt==2)
			summation=2000+d_pos1*500+d_pos2*500;
		else if (d_cnt==1)
			summation=1000+d_pos1*100;
		else
			summation=100*o_pos;
//		cout<<summation<<endl;

		if (summation>maxi)
			maxi=summation;
	}
	cout<<maxi<<endl;

	return 0;
}
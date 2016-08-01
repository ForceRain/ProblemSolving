#include <iostream>

#define my_abs(x) (((x)>0)?(x):-(x))

using namespace std;

int space[11];

int main(void)
{
	int tmp,bef_sum=0;
	int near_100=0,near_100_abs=1000;
	for (int i=1;i<=10;i++)
	{
		cin>>tmp;
		space[i]=tmp+bef_sum;
		bef_sum+=tmp;
	}
	for (int i=1;i<=10;i++)
	{
		int val=space[i]-space[0];
		if (near_100_abs>my_abs(val-100))
		{
			near_100_abs=my_abs(val-100);
			near_100=val;
		}
		else if ((near_100_abs==my_abs(val-100)) && (val-100)>0)
			near_100=val;
	}
	cout<<near_100<<endl;

	return 0;
}
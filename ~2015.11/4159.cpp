#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int space[1500];

int main(void)
{
	int num,val;
	while (true)
	{
		scanf("%d",&num);
		if (num==0)
			break;

		for (int i=0;i<num;i++)
			scanf("%d",&space[i]);
		sort(space,space+num);

		int lim=2*num-1;
		int ptr=2;
		for (int j=num;j<lim;j++)
			space[j]=space[num-ptr++];

		int acq_dis=0x7FFFFFFF;
		bool nope=false;
		for (int i=0;i<lim;i++)
		{
			if (acq_dis>=space[i])
				acq_dis=200+space[i];
			else
				nope=true;
		}
		if (nope)
			cout<<"IMPOSSIBLE"<<endl;
		else
			cout<<"POSSIBLE"<<endl;
	}
	return 0;
}
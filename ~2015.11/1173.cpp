#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int N,m,M,T,R;
	scanf("%d%d%d%d%d",&N,&m,&M,&T,&R);
	int counting=0,total_time=0;
	if ((m+T)>M)
		printf("-1\n");
	else
	{
		int current_num=m;
		while (counting<N)
		{
	//		cout<<current_num<<endl;
			if ((current_num+T)<=M)		// 운동 가능.
			{
				current_num+=T;
				counting++;
			}
			else
			{
				if ((current_num+T)>M)
					current_num-=R;
				if (current_num<m)
					current_num=m;
			}
			total_time++;
		}
	}
	printf("%d\n",total_time);

	return 0;
}
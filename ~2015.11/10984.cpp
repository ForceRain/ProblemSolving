#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int T,N;
	int GPA_sum=0;
	int t1;
	double t2;
	double sop=0.0;
	scanf("%d",&T);

	for (int i=0;i<T;i++)
	{
		GPA_sum=0;
		sop=0.0;
		scanf("%d",&N);
		for (int j=0;j<N;j++)
		{
			scanf("%d%lf",&t1,&t2);
			GPA_sum+=t1;
			sop+=t1*t2;
		}
		printf("%d %.1lf\n",GPA_sum,sop/GPA_sum);
	}

	return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

int stu[1001];

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for ( int i=0;i<test;i++ )
	{
		int peop;
		scanf( "%d" , &peop );
		int summation = 0;
		for ( int j = 0 ; j < peop ; j++ )
		{
			scanf ( "%d" , &stu[j] );
			summation += stu[j];
		}
		double avg = (summation*1.0/peop);

		int cnt = 0;
		for ( int j = 0 ; j < peop; j++ )
			if ( avg < stu[j] )	cnt++;

		printf("%.3lf%%\n",((cnt*1.0)/peop)*100);
	}

	return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

int counting[1000001];
int mapping[1000001];

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	counting[1] = 0;
	mapping[1] = 0;

	for ( int i=2;i<=1000000;i++ )
	{
		int min_cnt = 0x7FFFFFFF;
		int min_pos = 0;
		if ( i%2 == 0 )
			min_cnt = min_cnt > counting[i/2] ? min_pos = i/2, counting[i/2] : min_cnt;
		if ( i%3 == 0 )
			min_cnt = min_cnt > counting[i/3] ? min_pos = i/3, counting[i/3] : min_cnt;
		if ( (i-1) > 0 )
			min_cnt = min_cnt > counting[i-1] ? min_pos = i-1, counting[i-1] : min_cnt;

		counting[i] = min_cnt + 1;
		mapping[i] = min_pos;
	}
	
	printf("%d\n",counting[N]);
	int start_idx = N;
	while ( start_idx != 0 )
	{
		printf("%d ", start_idx);
		start_idx = mapping[start_idx];
	}
	printf("\n");

	return 0;
}
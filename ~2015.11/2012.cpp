#include <iostream>
#include <algorithm>
#include <cstdio>

#define my_abs(x) ( ( (x)<0 ) ? (-(x)) :(x) )

using namespace std;

int space[500001];

int main(void)
{
	int N;
	scanf("%d",&N);

	for (int i=1;i<=N;i++)
		scanf("%d",&space[i]);

	sort((space+1),(space+1)+N);
	unsigned long long summation=0;

	for (int i=1;i<=N;i++)
		summation+=(my_abs(i-space[i]));

	printf("%llu\n",summation);

	return 0;
}
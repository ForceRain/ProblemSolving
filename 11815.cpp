#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
	{
		long long val;
		scanf("%lld",&val);

		long long checker = sqrt(val);
		long long tmp = val / checker;

	//	cout << val <<", "<< checker << ", "<<tmp<<endl;

		if ( (val%checker == 0) && (checker == tmp) )
			printf("1 ");
		else
			printf("0 ");
	}
	printf("\n");

	return 0;
}
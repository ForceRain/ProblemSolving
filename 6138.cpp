#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int rawArr[50011];
int resArr[50011];

bool myCompare( int a, int b )
{
	int ap = (a < 0) ? -a : a;
	int bp = (b < 0) ? -b : b;
	return ap < bp;
}

int main(void)
{
	int T,N;
	freopen("test.txt","r",stdin);
	scanf("%d%d",&T,&N);

	for ( int i=1;i<=N;i++ )
		scanf("%d",&rawArr[i]);
	
	sort(rawArr+1,rawArr+(N+1),myCompare);

	for ( int i=1;i<=N;i++ )
	{
		int diff = 0;
	//	if ( (rawArr[i-1]*rawArr[i]) < 0 )
			diff = abs(rawArr[i-1]-rawArr[i]);
	//	else
	//		diff = rawArr[i] - rawArr[i-1];
		resArr[i] = diff + resArr[i-1];
	}
	/*
	for ( int i=0;i<=N;i++ )
		cout<<resArr[i] << " ";
	cout<<endl;*/

	int pos = lower_bound(resArr,resArr+N+1,T)-resArr;
	printf("%d\n",pos-1);

	return 0;
}
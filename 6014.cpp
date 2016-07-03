#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int notes[10001];

int main(void)
{
	int N,Q;
	freopen("test.txt","r",stdin);
	scanf("%d%d",&N,&Q);

	int accSum = 0;
	for ( int i=0;i<N;i++ )
	{
		int val;
		scanf("%d",&val);
		notes[i+1] = accSum + val;
		accSum += val;
	}

	for ( int k=0;k<Q;k++ )
	{
		int query;
		scanf("%d",&query);
		int pos = upper_bound(notes+1,notes+N+1,query)-notes;
		printf("%d\n",pos);
	}
	return 0;
}
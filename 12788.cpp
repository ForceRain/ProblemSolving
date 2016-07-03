#include <iostream>
#include <cstdio>
#include <algorithm>
#include <functional>

using namespace std;

int member[1001];

int main(void)
{
	int N;
	int M, K;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);
	scanf("%d %d",&M,&K);
	int total = M*K;
	
	for ( int i=0;i<N;i++ )	scanf("%d",&member[i]);
	sort( member, member+N, greater<int>() );

	int summa = 0;
	bool checked = false;
	int counter = 0;
	for ( int i=0;i<N;i++ )
	{
		summa += member[i];
		counter++;
		if ( summa >= total )
		{
			checked = true;
			break;
		}
	}
	if ( checked )	printf("%d\n",counter);
	else	printf("STRESS\n");

	return 0;
}
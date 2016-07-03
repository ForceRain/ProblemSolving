#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

#define PAIR pair<double,int>

int mapper[25001][2];
vector < PAIR > container;

bool my_compare( PAIR a, PAIR b )
{
	if ( a.first > b.first )
		return true;
	else return false;
}

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
	{
		int a,b;
		scanf("%d%d",&a,&b);
		mapper[i][0] = a;
		mapper[i][1] = b;

		container.push_back( PAIR ( (1.0*a)/b,i ) );
	}
	sort(container.begin(),container.end(),my_compare);

	int summation = mapper[container[0].second][1] + mapper[container[1].second][1] + mapper[container[2].second][1];
	printf("%d\n",summation);
	for ( int i=0;i<3;i++ )
		printf("%d\n",container[i].second+1);

	return 0;
}
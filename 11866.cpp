#include <iostream>
#include <cstdio>
#include <list>

using namespace std;

list <int> container;

int main(void)
{
	int N,M;
	scanf("%d%d",&N,&M);

	for ( int i=1;i<=N;i++ )	container.push_back(i);

	list <int> :: iterator it = container.begin();
	list <int> :: iterator tmp;
	printf("<");
	while ( !container.empty() )
	{
		for ( int j=1;j<M;j++ )
		{
			it++;
			if ( it == container.end() )				
				it = container.begin();
		}
		
		printf("%d, ",*(it));
		tmp = it++;
		if ( it == container.end() )
			it = container.begin();
		
		container.erase(tmp);
	}
	printf("\b\b>\n");

	return 0;
}
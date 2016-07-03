#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int leftbox[203];
int rightbox[203];

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for ( int i=0;i<test;i++ )
	{
		int M;
		int counter = 0;
		scanf("%d",&M);

		for ( int j=0;j<M;j++ )
			scanf("%d",&leftbox[j]);
		for ( int j=0;j<M;j++ )
			scanf("%d",&rightbox[j]);

		for ( int j=0;j<M;j++ )
		{
			bool leftback = binary_search(leftbox,leftbox+M,leftbox[j]+500);
			bool rightfront = binary_search(rightbox,rightbox+M,leftbox[j]+1000);
			bool rightback = binary_search(rightbox,rightbox+M,leftbox[j]+1500);

			if ( leftback && rightfront && rightback )
				counter++;
		}
		printf("%d\n",counter);
	}

	return 0;
}
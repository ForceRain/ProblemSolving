#include <iostream>
#include <cstdio>

using namespace std;

int mapping[256][2];

void preorder( char nd )
{
	printf("%c",nd);
	for ( int i=0;i<2;i++ )
		if ( mapping[nd][i] != '.' )
			preorder( mapping[nd][i] );
}

void inorder( char nd )
{
	if ( mapping[nd][0] != '.' )
		inorder( mapping[nd][0] );
	printf("%c",nd);
	if ( mapping[nd][1] != '.' )
		inorder( mapping[nd][1] );
}

void postorder( char nd )
{
	for ( int i=0;i<2;i++ )
		if ( mapping[nd][i] != '.' )
			postorder( mapping[nd][i] );
	printf("%c",nd);
}

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);
	getchar();

	for ( int i=0;i<N;i++ )
	{
		char a,b,c;
		scanf("%c %c %c\n",&a,&b,&c);
		mapping[a][0] = b;
		mapping[a][1] = c;
	}

	preorder('A');
	printf("\n");
	inorder('A');
	printf("\n");
	postorder('A');
	printf("\n");

	return 0;
}
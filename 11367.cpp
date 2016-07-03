#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

char name[100];
char *res[9]={"A+","A","B+","B","C+","C","D+","D","F"};
int mapping[101];

int main(void)
{
	int N;
	for ( int i=0;i<=59;i++ )	mapping[i] = 8;	
	for ( int i=60;i<=66;i++ )	mapping[i] = 7;for ( int i=80;i<=86;i++ )	mapping[i] = 3;
	for ( int i=67;i<=69;i++ )	mapping[i] = 6;for ( int i=87;i<=89;i++ )	mapping[i] = 2;
	for ( int i=70;i<=76;i++ )	mapping[i] = 5;for ( int i=90;i<=96;i++ )	mapping[i] = 1;
	for ( int i=77;i<=79;i++ )	mapping[i] = 4;for ( int i=97;i<=100;i++ )	mapping[i] = 0;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
	{
		int point;
		cin>>name>>point;
		printf("%s %s\n",name,res[mapping[point]]);
	}

	return 0;
}
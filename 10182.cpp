#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

char input_stream[11];

int main(void)
{
	int test;
	freopen("test.txt","r",stdin);
	scanf("%d",&test);

	for ( int i=0;i<test;i++ )
	{
		double val;
		scanf("%s = %lf",input_stream,&val);
	//	cout<<input_stream<<", "<<val;
		if ( strcmp( "H", input_stream ) == 0 )
			printf("%.2lf\n",-log10(val));
		else
			printf("%.2lf\n",14+log10(val));
	}

	return 0;
}
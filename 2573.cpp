#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

char input[100];

int main(void)
{
	scanf("%s",input);

	int len = strlen( input ) ;
	bool huh = false;
	for ( int i=1;i<len;i++ )
	{
		unsigned long long v1=1,v2=1;
		
		for ( int j=0;j<i;j++ )		v1 *= (input[j]-'0');

		for ( int k=i;k<len;k++ )	v2 *= (input[k]-'0');

//		cout<<v1<<","<<v2<<endl;

		if ( v1 == v2 )
			huh = true;
	}
	if ( huh )	printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	int a,b,c;
	freopen("test.txt","r",stdin);
	while ( true )
	{
		scanf("%d %d %d",&a,&b,&c);
		if ( a==0 && b==0 && c==0 )
			break;

		int longD = c-a;
		int diff = b;

		if ( longD * diff < 0 )	cout<<"X"<<endl;
		else if ( longD % diff == 0 )
			cout<<longD/diff +1<<endl;
		else
			cout<<"X"<<endl;
	}
	return 0;
}
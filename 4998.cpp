#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	double N,M,B;
	freopen("test.txt","r",stdin);
	while ( cin>>N>>B>>M )
	{
		cout<<N<<" "<<B<<" "<<M<<endl;
		int cnt = 0;
		double P = B/100.0;
		double Pvalue = P;
		double determinant = 1-((M/N)*( 1-P ));
		while ( determinant < Pvalue )
		{
			Pvalue *= P;
			cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	double x1,x2,x3,y1,y2,y3,z1,z2,z3;
	cin>>x1>>y1>>z1>>x2>>y2>>z2>>x3>>y3>>z3;

	double t1 = x2-x1;
	double t2 = y2-y1;
	double t3 = z2-z1;
	cout<<t1<<", "<<t2<<", "<<t3<<endl;

	double tValue = (t1 * ( x3-x1 ) + t2 * ( y3 - y1 ) + t3 * ( z3 - z1 ) ) / ( (t1*t1) + (t2*t2) + (t3*t3) );

	double ans = sqrt( ( t1 * tValue + x1-x3 ) * ( t1 * tValue + x1-x3 ) 
						+ ( t2 * tValue + y1-y3 ) * ( t2 * tValue + y1-y3 ) 
						+ ( t3 * tValue + z1-z3 ) * ( t3 * tValue + z1-z3 ) );

	printf("%.10lf\n",ans);
	cout<<ans<<endl;

	return 0;
}
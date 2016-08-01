#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
	unsigned long long S;
	cin>>S;

	double outval=(-1.0+sqrt(1+8*S))/2;
	long long result=1;
	while (outval>result)	result++;

	cout<<result-1<<endl;

	return 0;
}
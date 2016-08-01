#include <iostream>
#include <cstdio>

using namespace std;

double values[10001];

int main(void)
{
	int N;
	cin>>N;
	for (int i=0;i<N;i++)
		scanf("%lf",&values[i]);

	double res;
	double mult=res=values[0];
	for (int i=1;i<N;i++)
	{
		if (values[i]>values[i]*mult)
			mult=values[i];
		else
			mult*=values[i];
		if (mult>res)	res=mult;
	}
	printf("%.3lf\n",res);

	return 0;
}
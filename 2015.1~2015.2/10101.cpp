#include <iostream>

using namespace std;

int main(void)
{
	int a,b,c;
	cin>>a>>b>>c;

	if ((a==60) && (b==60) && (c==60))
		cout<<"Equilateral"<<endl;
	else if (((a+b+c)==180) && ((a==b)||(b==c)||(c==a)))
		cout<<"Isosceles"<<endl;
	else if (((a+b+c)==180) && ((a!=b) && (b!=c) && (c!=a)))
		cout<<"Scalene"<<endl;
	else if ((a+b+c)!=180)
		cout<<"Error"<<endl;

	return 0;
}
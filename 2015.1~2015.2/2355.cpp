#include <iostream>

using namespace std;

int main(void)
{
    long long in,jn;
    
    cin>>in>>jn;
    
    if (in>jn)
    {
        long long tmp=in;
        in=jn;
        jn=tmp;
    }

	if (in==0)
	{
		if (jn<0)
		{
			unsigned long long j=-jn;
			cout<<"-"<<j*(j+1)/2<<endl;
		}
		else if (jn>0)
		{
			unsigned long long j=jn;
			cout<<j*(j+1)/2<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
		return 0;
	}

	if (in>0 && jn>0)
	{
		unsigned long long i=in;
		unsigned long long j=jn;
		unsigned long long result=(j*(j+1))/2-(i*(i-1))/2;
		cout<<result<<endl;
	}
	else if (in<0 && jn>0)
	{
		if ((-in)>jn)
		{
			unsigned long long i=-in;
			unsigned long long j=-jn;
			unsigned long long result=(i*(i+1))/2-(j*(j-1))/2;
			cout<<"-"<<result<<endl;
		}
		else
		{
			unsigned long long i=-in;
			unsigned long long j=jn;
			unsigned long long result=(j*(j+1))/2-(i*(i+1))/2;
			cout<<result<<endl;
		}
	}
	else
	{
		unsigned long long i=-in;
		unsigned long long j=-jn;
		unsigned long long result=(i*(i+1))/2-(j*(j-1))/2;
		cout<<"-"<<result<<endl;
	}
    
    return 0;
}
#include <iostream>

using namespace std;

int main(void)
{
    long long i,j;
	int times;
	cin>>times;
    
	for (int k=0;k<times;k++)
	{
		 cin>>i>>j;
    
		if (i>j)
		{
			long long tmp=i;
			i=j;
			j=tmp;
		}
    
		long long result=(j*(j+1))/2-(i*(i+1))/2+i;
    
		cout<<"Scenario #"<<k+1<<":\n"<<result<<endl<<endl;
	}
    
    return 0;
}
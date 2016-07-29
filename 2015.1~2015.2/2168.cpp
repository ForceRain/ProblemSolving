#include <iostream>

using namespace std;

int main(void)
{
    unsigned long long x,y;
    
    cin>>x>>y;
    
    if (x>y)
    {
        unsigned long long temp=x;
        x=y;
        y=temp;
    }
    
    if ((y%x)!=0)
    {
        cout<<((y/x)+1)*x<<endl;
    }
    else
    {
        cout<<(y/x)*x<<endl;
    }
    
    return 0;
}
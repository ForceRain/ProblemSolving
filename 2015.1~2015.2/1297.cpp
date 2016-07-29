#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int l,a,b;
    
    cin>>l>>a>>b;
    
    int height=(a*l)/sqrt((a*a+b*b));
    int width=(b*l)/sqrt((a*a+b*b));
    
    cout<<height<<" "<<width<<endl;
    
    return 0;
}
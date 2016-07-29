#include <iostream>

using namespace std;

int main(void)
{
    unsigned long long result;
    
    unsigned long long k;
    cin>>k;

    result=(3*k*k+5*k)/2+1;

    cout<<result%45678<<endl;
    
    return 0;
    
}
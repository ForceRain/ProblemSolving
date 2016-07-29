#include <iostream>

using namespace std;

unsigned long long b_e(int n,int k)
{
    if (n==k || k==0)
        return 1;
    else
        return b_e(n-1,k)+b_e(n-1,k-1);
}

int main(void)
{
    int n,k;
    cin>>n>>k;
        
    cout<<b_e(n,k)<<endl;
    return 0;
}
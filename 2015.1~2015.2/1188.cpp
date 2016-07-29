#include <iostream>

using namespace std;

int main(void)
{
    int N,M;
    
    cin>>N>>M;
    
    if (N<M)
    {
        if (M%N==0)
            cout<<M-N<<endl;
        else
            cout<<M-1<<endl;
    }
    else if (N>M)
    {
		if (N%M==0)
            cout<<0<<endl;
        else
            cout<<M-1<<endl;
    }
    else
        cout<<0<<endl;
    
    return 0;
}
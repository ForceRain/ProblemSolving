#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int N;
    cin>>N;
    
    int input[7];
    
    for (int i=0;i<N;i++)   
    {
        for (int j=0;j<7;j++)
        {
            cin>>input[j];
        }
        
        int output=0;
        
        output+=9.23076*pow(26.7-input[0],1.835);
        output+=1.84523*pow(input[1]-75,1.348);
        output+=56.0211*pow(input[2]-1.5,1.05);
        output+=4.99087*pow(42.5-input[3],1.81);
        output+=0.188807*pow(input[4]-210,1.41);
        output+=15.9803*pow(input[5]-3.8,1.04);
        output+=0.11193*pow(254-input[6],1.88);
        
        cout<<output<<endl;
    }
    
    
    return 0;
}
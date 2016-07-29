#include <iostream>

using namespace std;

char matrix[101][101];
char input[51][51];

int main(void)
{
    int R,C;
    cin>>R>>C;
    
	for (int i=1;i<=R;i++)
    {
        for (int j=1;j<=C;j++)
        {
            cin>>input[i][j];
        }
    }

    //2사분면
    for (int i=1;i<=R;i++)
    {
        for (int j=1;j<=C;j++)
        {
            matrix[i][j]=input[i][j];
        }
    }
    
    //1사분면
    int rp=1,cp=1;
    for (int i=2*R;i>=R+1;i--,rp++)
    {
        for (int j=1;j<=C;j++,cp++)
        {
            matrix[i][j]=input[rp][cp];
        }
    }
    //3사분면
    
    rp=1,cp=1;
    for (int i=1;i<=R;i++,rp++)
    {
        for (int j=2*C;j<=C+1;j--,cp++)
        {
            matrix[i][j]=input[rp][cp];
        }
    }
    //4사분면
	

	for (int i=1;i<=2*R;i++)
	{
		for (int j=1;j<=2*C;j++)
			cout<<matrix[i][j];
		cout<<endl;
	}
    
    return 0;
}
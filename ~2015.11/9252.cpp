#include <iostream>
#include <cstring>

using namespace std;

char input1[1000];
char input2[1000];
int lcs[1000][1000];

void print_out(int,int);

void print_out(int l1,int l2)
{
    if (l1>0 && l2>0)
    {
		if (lcs[l1][l2]==lcs[l1-1][l2])
			print_out(l1-1,l2);
		else if (lcs[l1][l2]==lcs[l1][l2-1])
			print_out(l1,l2-1);
		else
		{
			print_out(l1-1,l2-1);
			cout<<input1[l1-1];
		}
    }
}

int main(void)
{
    cin>>input1;
    cin>>input2;
    
    int l1=strlen(input1);
    int l2=strlen(input2);
    
    for (int i=0;i<1000;i++){
        lcs[i][0]=0;
        lcs[0][i]=0;
    }
        
    for (int i=1;i<=l1;i++){
        for (int j=1;j<=l2;j++){
            if (input1[i-1]==input2[j-1])
                lcs[i][j]=lcs[i-1][j-1]+1;
            else if (lcs[i][j-1]>lcs[i-1][j])
                lcs[i][j]=lcs[i][j-1];
            else
                lcs[i][j]=lcs[i-1][j];
        }
    }
    /*
       for (int i=0;i<10;i++){
        for (int j=0;j<10;j++)
            cout<<lcs[i][j];
        cout<<endl;
    }*/
    
	cout<<lcs[l1][l2]<<endl;
    print_out(l1,l2);
    
    return 0;
}
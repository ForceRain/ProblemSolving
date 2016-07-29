#include <iostream>
#include <cstring>

using namespace std;

char op1[10001];
char op2[10001];

int main(void)
{
	cin>>op1>>op2;

	int l1=strlen(op1);
	int l2=strlen(op2);
	unsigned long long m=0,n=0;
	for (int i=0;i<l1;i++)
		m+=op1[i]-'0';

	for (int i=0;i<l2;i++)
		n+=op2[i]-'0';

	cout<<m*n<<endl;

	return 0;
}
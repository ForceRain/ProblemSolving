#include <iostream>
#include <cstdio>
#include <cstring>
#include <stack>

using namespace std;

int CtoI[256];
char ItoC[36];
char in1[1001];
char in2[1001];

int main(void)
{
	for ( int i = '0'; i<='9'; i++ )	CtoI[i] = i-'0';
	for ( int i = 'A'; i<='Z'; i++ )	CtoI[i] = i-'A'+10;
	for ( int i = 0; i<='9';i++ )	ItoC[i] = '0'+i;
	for ( int i = 10;i<=35;i++ )	ItoC[i] = 'A'+i-10;
	int N;
	freopen("test.txt","r",stdin);
	
	while (true)
	{
		stack <char> resContainer;
		cin>>N;
		if ( N == 0 )
			break;
		cin>>in1>>in2;
		
	//	cout<<N<<"i1 :"<<in1<<", i2 :"<<in2<<endl;
		int len = strlen(in1) - 1;
		long long summation = 0;
		int ruler = 1;
		while (len >=0)		
		{
			summation += CtoI[in1[len--]]*ruler;
			ruler *= N;
		}
		len = strlen(in2) - 1;
		ruler = 1;
		while (len >=0)		
		{
			summation += CtoI[in2[len--]]*ruler;
			ruler *= N;
		}
		printf("%s + %s = ",in1,in2);

		if ( N==1 )
			printf("%s%s",in1,in2);
		else
		{
			while ( summation > 0 )
			{
				resContainer.push(ItoC[summation%N]);
				summation /= N;
			}
			while ( !resContainer.empty() )
			{
				printf("%c",resContainer.top());
				resContainer.pop();
			}
		}
		printf("\n");
	}

	return 0;
}
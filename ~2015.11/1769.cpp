#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char input_stream[10000000];

int main(void)
{
	cin>>input_stream;
	int last_val;
	int loop_cnt=0;
	while (true)
	{
		int len=strlen(input_stream);
		if (len==1)
		{
			last_val=input_stream[0]-'0';
			break;
		}
		int summation=0;
		for (int i=0;i<len;i++)
			summation+=(input_stream[i]-'0');
		loop_cnt++;

		if ((0 < summation) && (summation < 10 ))
		{
			last_val=summation;
			break;
		}
	//	cout<<summation<<endl;
		sprintf(input_stream,"%d",summation);
	}
	cout<<loop_cnt<<endl;
	if (last_val%3==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}
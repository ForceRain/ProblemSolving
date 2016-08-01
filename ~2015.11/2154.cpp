#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

char buff[100001];
char finding[100001];

int main(void)
{
	string input="";
	int N;
	cin>>N;
	sprintf(finding,"%d",N);

	for (int i=1;i<=N;i++)
	{
		sprintf(buff,"%d",i);
		input+=buff;
	}
	int pos=input.find(finding);
	cout<<(pos+1)<<endl;

	return 0;
}
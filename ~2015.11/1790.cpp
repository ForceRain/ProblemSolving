#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

char buff[100];

int main(void)
{
	int N,K;
	cin>>N>>K;
	string str_chain="";

	for (int i=1;i<=N;i++)
	{
		sprintf(buff,"%d",i);
		str_chain+=buff;
	}

	if (str_chain.length()<K)
		cout<<-1<<endl;
	else
		cout<<str_chain[K-1]<<endl;

	return 0;
}
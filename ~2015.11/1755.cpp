#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

char tmp_buff[101];
string number[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
vector< pair<string,int> > container;

int main(void)
{
	int N,M;
	cin>>N>>M;

	for (int i=N;i<=M;i++)
	{
		string tmp="";
		sprintf(tmp_buff,"%d",i);
		int len=strlen(tmp_buff);
		for (int j=0;j<len;j++)
		{
			tmp=tmp+number[tmp_buff[j]-'0']+" ";
		}
		container.push_back(pair<string,int>(tmp,i));
	}

	sort(container.begin(),container.end());
	for (int i=0;i<container.size();i++)
	{
		cout<<container[i].second<<" ";
		if (i%10==9)
			cout<<endl;
	}

	return 0;
}
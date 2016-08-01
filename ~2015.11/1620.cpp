#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

map <string,int> mcontainer;
vector < string> container;
char input_buffer[100];
char ques[100];

int main(void)
{
	int N,M;
	scanf("%d%d",&N,&M);

	for (int i=0;i<N;i++)
	{
		scanf("%s",input_buffer);
		container.push_back(string(input_buffer));
		mcontainer.insert(pair<string,int>(input_buffer,i+1));
	}
	for (int i=0;i<M;i++)
	{
		scanf("%s",ques);
		if (('0'<=ques[0] && ques[0]<='9'))
		{
			int val=atoi(ques);
			printf("%s\n",container[val-1].c_str());
		}
		else
		{
			map<string,int>::iterator it=mcontainer.find(ques);
			printf("%d\n",(*it).second);
		}
	}

	return 0;
}
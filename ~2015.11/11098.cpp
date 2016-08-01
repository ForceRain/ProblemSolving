#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

char name_space[30];

bool my_compare(pair<int,string> a ,pair<int,string> b)
{
	return a.first<b.first;
}

int main(void)
{
	int test;
	scanf("%d",&test);
	for (int i=0;i<test;i++)
	{
		vector < pair<int,string> > container;
		int n,val;
		scanf("%d",&n);
		for (int j=0;j<n;j++)
		{
		//	scanf("%d%s",&val,name_space);
			cin>>val>>name_space;
			container.push_back(pair<int,string>(val,name_space));
		//	getchar();
		}
		sort(container.begin(),container.end(),my_compare);
		printf("%s\n",container[container.size()-1].second.c_str());
	}
}
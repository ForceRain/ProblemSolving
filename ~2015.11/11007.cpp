#include <iostream>
#include <cstdio>
#include <list>

using namespace std;

int main(void)
{
	int test,num,pos;
	scanf("%d",&test);
	
	for (int i=0;i<test;i++)
	{
		list <char > container;
		for (int j=0;j<26;j++)
			container.push_back('a'+j);
		scanf("%d",&num);
		for (int j=0;j<num;j++)
		{
			scanf("%d",&pos);
			list<char>::iterator it=container.begin();
			for (int k=0;k<pos;k++)	it++;
			char valu=(*it);
			container.erase(it);
			container.push_front(valu);
			printf("%c",valu);
		}
		printf("\n");
	}

	return 0;
}
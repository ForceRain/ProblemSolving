#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

map<string,int> container;

int main(void)
{
	string input;
	int total=0;
	container.insert(pair<string,int>("Re",0));
	container.insert(pair<string,int>("Pt",0));
	container.insert(pair<string,int>("Cc",0));
	container.insert(pair<string,int>("Ea",0));
	container.insert(pair<string,int>("Tb",0));
	container.insert(pair<string,int>("Cm",0));
	container.insert(pair<string,int>("Ex",0));

	while (cin>>input)
	{
		map<string,int>::iterator it=container.find(input);
		if (it!=container.end())
			(it->second)++;
		total++;
	}

	map<string,int>::iterator it=container.find("Re");
	printf("%s %d %.2lf\n",it->first.c_str(),it->second,(double)it->second/(total));
	it=container.find("Pt");
	printf("%s %d %.2lf\n",it->first.c_str(),it->second,(double)it->second/(total));
	it=container.find("Cc");
	printf("%s %d %.2lf\n",it->first.c_str(),it->second,(double)it->second/(total));
	it=container.find("Ea");
	printf("%s %d %.2lf\n",it->first.c_str(),it->second,(double)it->second/(total));
	it=container.find("Tb");
	printf("%s %d %.2lf\n",it->first.c_str(),it->second,(double)it->second/(total));
	it=container.find("Cm");
	printf("%s %d %.2lf\n",it->first.c_str(),it->second,(double)it->second/(total));
	it=container.find("Ex");
	printf("%s %d %.2lf\n",it->first.c_str(),it->second,(double)it->second/(total));
	printf("Total %d %.2lf\n",total,(double)total/total);

	return 0;
}
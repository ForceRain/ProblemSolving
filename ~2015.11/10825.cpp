#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct _rec
{
	int korean;
	int eng;
	int math;
	string name;
	_rec(int k,int e,int m,string n) : korean(k),eng(e),math(m),name(n) {}
}Record;

vector <Record> container;

bool my_compare(Record a,Record b)
{
	if (a.korean>b.korean)
		return true;
	else if (a.korean<b.korean)
		return false;
	else
	{
		if (a.eng<b.eng)
			return true;
		else if (a.eng>b.eng)
			return false;
		else
		{
			if (a.math>b.math)
				return true;
			else if (a.math<b.math)
				return false;
			else
				return a.name<b.name;
		}
	}
}

int main(void)
{
	int N;
	cin>>N;
	string n;
	int k,e,m;
	for (int i=0;i<N;i++)
	{
		cin>>n>>k>>e>>m;
		container.push_back(Record(k,e,m,n));
	}
	sort(container.begin(),container.end(),my_compare);

	int siz=container.size();
	for (int i=0;i<siz;i++)
		cout<<container[i].name<<endl;

	return 0;
}
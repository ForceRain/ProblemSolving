#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct _record
{
	int country;
	int place;
	int gold;
	int silver;
	int bronze;
	_record(int c,int g,int s,int b) : country(c),gold(g),silver(s),bronze(b) {}
}Record;

vector <Record> container;

bool my_compare(Record a, Record b)
{
	if (a.gold>b.gold)
		return true;
	else if (a.gold<b.gold)
		return false;
	else
	{
		if (a.silver>b.silver)
			return true;
		else if (a.silver<b.silver)
			return false;
		else
		{
			if (a.bronze>b.bronze)
				return true;
			else
				return false;
		}
	}
}

bool my_compare_2(Record a, Record b)
{
	return a.country<b.country;
}

int main(void)
{
	int N,K;
	cin>>N>>K;

	int coun,g,s,b;
	for (int i=0;i<N;i++)
	{
		cin>>coun>>g>>s>>b;
		container.push_back(Record(coun,g,s,b));
	}

	sort(container.begin(),container.end(),my_compare);

	int bef_g=container[0].gold,bef_s=container[0].silver,bef_b=container[0].bronze;
	int counter=1;
	int upper_counter=1;
	for (int i=1;i<N;i++)
	{
		if ((bef_g==container[i].gold) && (bef_s==container[i].silver) && (bef_b==container[i].bronze))
		{
			upper_counter++;
			container[i].place=counter;
		}
		else
		{
			counter+=upper_counter;
			container[i].place=counter;
			upper_counter=1;
		}
		bef_g=container[i].gold;
		bef_s=container[i].silver;
		bef_b=container[i].bronze;
	}
	sort(container.begin(),container.end(),my_compare_2);
	cout<<container[K-1].place<<endl;

	return 0;
}
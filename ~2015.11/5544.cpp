#include <iostream>
#include <algorithm>

using namespace std;

pair<int,int> container[101];
int grade[101];

bool my_compare(pair<int,int> a,pair<int,int> b)
{
	return a.second>b.second;
}

int main(void)
{
	int N;
	cin>>N;
	int A,B,C,D,total=((N-1)*N)/2;
	for (int i=0;i<101;i++)
		container[i].first=i;

	for (int i=0;i<total;i++)
	{
		cin>>A>>B>>C>>D;
		if (C>D)
			container[A].second+=3;
		else if (C<D)
			container[B].second+=3;
		else
		{
			container[A].second++;
			container[B].second++;
		}
	}
	sort(container+1,container+(N+1),my_compare);
	int same_grade=1;
	int bef=0;
	int gr=1;
	grade[container[1].first]=gr;
	bef=container[1].first;
	for (int i=2;i<=N;i++)
	{
	//	cout<<gr<<endl;
		if (bef==container[i].second)
		{
			same_grade++;
			grade[container[i].first]=gr;
		}
		else
		{
			gr+=same_grade;
			grade[container[i].first]=gr;
			same_grade=1;
		}
		bef=container[i].second;
	}
	for (int i=1;i<=N;i++)
		cout<<grade[i]<<endl;

	return 0;
}
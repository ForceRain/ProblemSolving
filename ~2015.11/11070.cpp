#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

bool my_compare(pair<int,int> a,pair<int,int> b)
{
	return a.first*b.second < a.second*b.first;
}

int main(void)
{
	int test;
	scanf("%d",&test);

	int n,m;
	int a,b,p,q;
	for ( int i=0;i<test;i++)
	{
		scanf("%d%d",&n,&m);
		int plus[1001]={0};
		int minus[1001]={0};
		vector <pair<int,int> > container;
		for (int j=0;j<m;j++)
		{
			scanf("%d%d%d%d",&a,&b,&p,&q);
			plus[a]+=p;minus[b]+=p;
			plus[b]+=q;minus[a]+=q;
		}
		for (int k=1;k<=n;k++)
		{
			container.push_back(pair<int,int>(plus[k]*plus[k],plus[k]*plus[k]+minus[k]*minus[k]));
		}
		sort(container.begin(),container.end(),my_compare);
		if ( (container[n-1].first == 0) && (container[n-1].second == 0) )
			printf("0\n");
		else
			printf("%d\n",(int)( ((float)container[n-1].first/(float)container[n-1].second)*1000 ));

		if ( (container[0].first == 0) && (container[0].second == 0) )
			printf("0\n");
		else
			printf("%d\n",(int)( ((float)container[0].first/(float)container[0].second)*1000 ));
	}

	return 0;
}
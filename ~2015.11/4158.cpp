#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void)
{
	int N,M,num;
	while (true)
	{
		scanf("%d%d",&N,&M);
		if ((N==0) && (M==0))
			break;
		vector < int > cont1;
		vector < int > cont2;

		for (int i=0;i<N;i++)
		{
			scanf("%d",&num);
			cont1.push_back(num);
		}
		for (int i=0;i<M;i++)
		{
			scanf("%d",&num);
			cont2.push_back(num);
		}
		int s1=cont1.size();
		int s2=cont2.size();
		int pt1=0,pt2=0;
		int cnt=0;
		while (pt1<s1 && pt2<s2)
		{
			if (cont1[pt1]>cont2[pt2])
				pt2++;
			else if (cont1[pt1]<cont2[pt2])
				pt1++;
			else
			{
				cnt++;
				pt1++;pt2++;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}
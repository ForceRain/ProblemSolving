#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

char robots[11][31];

int main(void)
{
	int test;
	scanf("%d",&test);

	for (int i=0;i<test;i++)
	{
		bool dead_line[11]={false};
		int lines;
		scanf("%d",&lines);

		for (int j=0;j<lines;j++)
			scanf("%s",robots[j]);

		int len=strlen(robots[0]);
		int left_per=lines;
		for (int j=0;j<len;j++)
		{
			int space[256]={0};
			vector <int> container[256];
			for (int k=0;k<lines;k++)
			{
				if (!dead_line[k])
				{
					space[robots[k][j]]++;
					container[robots[k][j]].push_back(k);
				}
			}
			if ( space['S'] * space['R'] * space['P'] == 0)
			{
				if (( space['S'] == left_per ) || ( space['R'] == left_per ) || ( space['P'] == left_per ))	{}
				else
				{
					int sz;
					if (space['S'] == 0 )
					{
						sz=container['R'].size();
						left_per-=sz;
						for (int l=0;l<sz;l++)
							dead_line[container['R'].at(l)]=true;
					}
					if (space['R'] == 0)
					{
						sz=container['P'].size();
						left_per-=sz;
						for (int l=0;l<sz;l++)
							dead_line[container['P'].at(l)]=true;
					}
					if (space['P'] == 0)
					{
						sz=container['S'].size();
						left_per-=sz;
						for (int l=0;l<sz;l++)
							dead_line[container['S'].at(l)]=true;
					}
				}
		//		cout<<j<<","<<left_per<<endl;
			}
			if (left_per == 1)
				break;
		}
		int cnt=0,pos;
		for (int i=0;i<lines;i++)
		{
			if (!dead_line[i])
			{
				cnt++;
				pos=i;
			}
		}
		if (cnt>1)
			printf("0\n");
		else
			printf("%d\n",pos+1);
	}

	return 0;
}
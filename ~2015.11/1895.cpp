#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int space[41][41];
vector <int> container;

int main(void)
{
	int R,C,T;
	scanf("%d%d",&R,&C);

	for (int i=0;i<R;i++)
	{
		for (int j=0;j<C;j++)
			scanf("%d",&space[i][j]);
	}
	scanf("%d",&T);
	int max_R=R-3;
	int max_C=C-3;
	for (int i=0;i<=max_R;i++)
	{
		for (int j=0;j<=max_C;j++)
		{
			int ending_r=i+3;
			int ending_c=j+3;
			vector <int> tmp_c;
			for (int k=i;k<ending_r;k++)
			{
				for (int l=j;l<ending_c;l++)
					tmp_c.push_back(space[k][l]);
			}
			sort(tmp_c.begin(),tmp_c.end());
	//		cout<<tmp_c[4]<<endl;
			container.push_back(tmp_c[4]);
		}
	}
	sort(container.begin(),container.end());
	int sz=container.size();
	int last_pos=-1;
	for (int i=0;i<sz;i++)
	{
		if (T<=container[i])
		{
			last_pos=i;
			break;
		}
	}
	if (last_pos==-1)
		printf("0\n");
	else
		printf("%d\n",sz-last_pos);

	return 0;
}
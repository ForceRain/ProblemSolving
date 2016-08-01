#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <set>
using namespace std;

set < int > node_con[100010];
vector <pair<int, int> > container;

int main(void)
{
	int test;
	//freopen("test.txt","r",stdin);
	scanf("%d", &test);
	for (int i = 0; i < test; i++)
	{
		container.clear();
		int N;
		scanf("%d", &N);
		int x, y,ques_num,qu;
		int max_x = 0;
		for (int j = 0; j < N; j++) 
		{
			scanf("%d%d", &x, &y);
			node_con[x].insert(y);
			if (max_x < x)
				max_x = x;
		}
		int start_y = 0;
		for (int j = 0; j <= max_x; j++)
		{
			if (node_con[j].empty())
				continue;

			set <int> ::iterator it = node_con[j].begin();
			set <int> ::iterator eit = node_con[j].end();
			
			if ((*it) == start_y)		// up
			{
				while (it != eit)
				{
					container.push_back(pair<int, int>(j, (*it)));
					start_y = (*it);
					it++;
				}
			}
			else						// down
			{
				while (it != eit)
				{
					eit--;
					container.push_back(pair<int, int>(j, (*eit)));
					start_y = (*eit);
				}
			}
		}

		scanf("%d", &ques_num);
		for (int j = 0; j < ques_num; j++)
		{
			scanf("%d", &qu);
			printf("%d %d\n", container[qu - 1]);
		}
		for (int l = 0; l <= max_x; l++)
			node_con[l].clear();
	}
	return 0;
}
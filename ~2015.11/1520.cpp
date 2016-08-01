#include <iostream>
#include <queue>

using namespace std;

int space[502][502];

queue< pair<int,int> > container;

int main(void)
{
	int N,M;
	int ways=0;
	int direction[3][2]={{0,1},{0,-1},{1,0}};
	cin>>N>>M;

	for (int i=0;i<502;i++)
	{
		space[i][0]=-1;
		space[0][i]=-1;
		space[501][i]=-1;
		space[i][501]=-1;
	}

	for (int i=1;i<=N;i++)
		for (int j=1;j<=M;j++)
			cin>>space[i][j];

	container.push(pair<int,int>(1,1));

	while (!container.empty())
	{
		pair<int,int> tmp=container.front();
		container.pop();
		int current_value=space[tmp.first][tmp.second];

		if ((tmp.first==N) && (tmp.second==M))
			ways++;
		else
		{
			for (int j=0;j<3;j++)
			{
				int move_x=tmp.first+direction[j][0];
				int move_y=tmp.second+direction[j][1];
				int moved=space[move_x][move_y];
				if ((moved != -1) && (moved<current_value))
					container.push(pair<int,int>(move_x,move_y));
			}
		}
	}
	cout<<ways<<endl;

	return 0;
}
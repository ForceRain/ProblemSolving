#include <iostream>
#include <algorithm>

using namespace std;

#define ROCK 1
#define SCISSOR 0
#define PAPER 2

pair<double,int> me_open[4];
pair<double,int> oppo_open[4];
int match_rule[3][3];			// me, opponent

int main(void)
{
	int N;
	cin>>N;
	if (N==0)
	{
		cout<<1<<endl;
		return 0;
	}
	int me,opponent;
	match_rule[ROCK][SCISSOR]=1;
	match_rule[SCISSOR][PAPER]=1;
	match_rule[PAPER][ROCK]=1;
	for (int i=0;i<3;i++)
	{
		me_open[i].second=i;
		oppo_open[i].second=i;
	}

	for (int i=0;i<N;i++)
	{
		cin>>me>>opponent;
		// compare후에 비율 조정하기, me의 경우에 무승부등장시 비율은 0.45로 조정.
		if (match_rule[me][opponent])
		{
			me_open[me].first=me_open[me].first+0.3456;
			oppo_open[opponent].first=oppo_open[opponent].first+0.6544;
		}
		else if (me==opponent)
		{
			me_open[me].first=me_open[me].first+0.45;
			oppo_open[opponent].first=oppo_open[opponent].first+0.6;
		}
		else
		{
			me_open[me].first=me_open[me].first+0.6544;
			oppo_open[opponent].first=oppo_open[opponent].first+0.3456;
		}
		me_open[me].first=me_open[me].first*0.523+0.487;
		oppo_open[opponent].first=oppo_open[opponent].first*0.523+0.487;
		for (int j=0;j<3;j++)
		{
			if (me!=j)
				me_open[j].first=me_open[j].first*1.00098;
			if (opponent!=j)
				oppo_open[j].first=oppo_open[j].first*0.98;
		}
	}
	sort(me_open,me_open+3);
	sort(oppo_open,oppo_open+3);

	int oppo_approx=oppo_open[2].second;
	int me_approx=me_open[2].second;

	if (match_rule[me_approx][oppo_approx]==1)
		cout<<me_approx<<endl;
	else
	{
		for (int i=0;i<3;i++)
		{
			if (match_rule[i][oppo_approx]==1)
			{
				cout<<i<<endl;
				break;
			}
		}
	}
	
	return 0;
}
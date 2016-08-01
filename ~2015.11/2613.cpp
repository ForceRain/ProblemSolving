#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef struct _node 
{
	vector<int> group_num;
	int summation;
	int stage;
	int group_stage;
	int local_summation;
	_node(vector<int> g,int s,int st,int gs,int lc) : group_num(g),summation(s),stage(st),group_stage(gs),local_summation(lc) {}
}Node;

int weigh[101];
queue <Node> container;

int main(void)
{
	int N,M,tmp;
	cin>>N>>M;
	for (int i=1;i<=N;i++)
	{
		cin>>tmp;
		weigh[i]=tmp;
	}
	int max_min=0x7FFFFFFF;
	vector<int> group_result;
	vector<int> ttmp;
	ttmp.push_back(0);
	container.push(Node(ttmp,0,0,0,0));
	while (!container.empty())
	{
		Node tmp=container.front();
		container.pop();

		cout<<tmp.summation<<endl;
		cout<<tmp.stage<<", "<<tmp.group_stage<<endl;
		for (int i=0;i<tmp.group_num.size();i++)
			cout<<tmp.group_num[i]<<" ";
		cout<<endl;
		
		if ((tmp.group_num.size()==M) && (tmp.stage==N))
		{
			int check=tmp.summation>tmp.local_summation?tmp.summation:tmp.local_summation;
			if (max_min>check)
			{
				max_min=check;
				group_result=tmp.group_num;				
			}
		}
		else if ((tmp.group_stage<M) && (tmp.stage<N))
		{
			// divide
			ttmp=tmp.group_num;
			ttmp.push_back(1);
			int value=(tmp.summation>tmp.local_summation?tmp.summation:tmp.local_summation);
			container.push(Node(ttmp,value,tmp.stage+1,tmp.group_num.size(),weigh[tmp.stage+1]));
			// join
			ttmp=tmp.group_num;
			ttmp[ttmp.size()-1]++;
			container.push(Node(ttmp,tmp.summation,tmp.stage+1,tmp.group_num.size(),tmp.local_summation+weigh[tmp.stage+1]));
		}
	}
	
	cout<<max_min<<endl;
	for (int i=0;i<group_result.size();i++)
		cout<<group_result[i]<<" ";
	cout<<endl;

	return 0;
}
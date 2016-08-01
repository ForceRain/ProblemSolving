#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct _node
{
	int weight;
	int height;
	int number;
	_node (int w,int h,int n) : weight(w), height(h), number(n) {}
}Node;

vector <Node> container;
int grade_space[51];

bool my_compare(Node a, Node b)
{
	if (a.weight>b.weight)
	{
		if (a.height>b.height)
			return true;
		else return false;
	}
	return false;
}

int main(void)
{
	int N;
	cin>>N;
	int w,h;

	for (int i=0;i<N;i++)
	{
		cin>>w>>h;
		container.push_back(Node(w,h,i+1));
	}
	sort(container.begin(),container.end(),my_compare);
	int grade=1;
	int plus_per=1;
	Node bef=container[0];
	grade_space[bef.number]=grade;
	for (int i=1;i<container.size();i++)
	{
		if ((container[i].height<bef.height) && (container[i].weight<bef.weight))
		{
			grade+=plus_per;
			grade_space[container[i].number]=grade;
			plus_per=1;
			bef=container[i];
		}
		else
		{
			grade_space[container[i].number]=grade;
			plus_per++;
		}
	}
	for (int i=1;i<=N;i++)
		cout<<grade_space[i]<<" ";
	cout<<endl;

	return 0;
}
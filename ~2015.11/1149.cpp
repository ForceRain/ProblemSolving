#include <iostream>
#include <queue>

using namespace std;

#define R 0
#define G 1
#define B 2

typedef struct _node
{
	int level;
	int bef;
	int weight;
	_node(int lv,int b,int w) : level(lv),bef(b),weight(w){}
}Node;

queue<Node> container;		// bef, weight
int rgb_space[1000][3];
int control[3][2]={{1,2},{0,2},{0,1}};

int main(void)
{
	int N;
	int r,g,b;
	cin>>N;
	int minimum=0x7FFFFFFF;

	for (int i=0;i<N;i++)
	{
		cin>>r>>g>>b;
		rgb_space[i][R]=r;
		rgb_space[i][G]=g;
		rgb_space[i][B]=b;
	}

	container.push(Node(0,R,rgb_space[0][R]));
	container.push(Node(0,G,rgb_space[0][G]));
	container.push(Node(0,B,rgb_space[0][B]));

	while (!container.empty())
	{
		Node tmp=container.front();
		container.pop();
		if (tmp.level==(N-1))
		{
			if (minimum>tmp.weight)
				minimum=tmp.weight;
		}
		else
		{
			int next=tmp.bef;
			for (int j=0;j<2;j++)
			{
				container.push(Node(tmp.level+1,control[next][j],tmp.weight+rgb_space[tmp.level+1][control[next][j]]));
			}
		}
	}

	cout<<minimum<<endl;

	return 0;
}
#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

typedef struct _node
{
	int masked;
	int level;
	int x_pos;
	int y_pos;
	_node(int mask,int l,int x,int y) : masked(mask), level(l), x_pos(x), y_pos(y) {}
}Node;

char space[22][22];
bool not_valid[22][22];
int mapping[26];
queue < Node > container;

int main(void)
{
	int R,C;
	int direction[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
	cin>>R>>C;

	int mask=1;
	for (int i=0;i<22;i++)
	{
		not_valid[0][i]=true;
		not_valid[i][0]=true;
		not_valid[21][i]=true;
		not_valid[i][21]=true;
	}

	for (int i=0;i<26;i++,mask*=2)
	{
	//	printf("%x\n",mask);
		mapping[i]=mask;
	}
	for (int i=1;i<=R;i++)
		scanf("%s",(&space[i][1]));

	int maxi=-1;
	int start_value=mapping[space[1][1]-'A'];
	container.push(Node(start_value,1,1,1));
	while (!container.empty())
	{
		Node tmp=container.front();
		container.pop();
		if (tmp.level>maxi)
			maxi=tmp.level;

		for (int i=0;i<4;i++)
		{
			int new_x=tmp.x_pos+direction[i][0];
			int new_y=tmp.y_pos+direction[i][1];
	//		cout<<"char : "<< space[new_x][new_y]<<endl;
	//		cout<<" masking : "<<(tmp.masked ^ mapping[space[new_x][new_y]-'A'])<<endl;
			if (!not_valid[new_x][new_y] && (  (tmp.masked & mapping[space[new_x][new_y]-'A']) != mapping[space[new_x][new_y]-'A'] ) )
			{
				int new_val=(tmp.masked | mapping[space[new_x][new_y]-'A']);
				container.push(Node (new_val, tmp.level+1, new_x, new_y) );
			}
		//	getchar();
		}
	}
	cout<<maxi<<endl;

	return 0;
}
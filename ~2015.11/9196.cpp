#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct _node
{
	int w;
	int h;
	int diagnl;
	_node ( int wid,int hei,int diag ) : w(wid), h(hei), diagnl(diag) {}
}Node;

bool my_compare(Node a, Node b)
{
	if (a.diagnl<b.diagnl)
		return true;
	else if (a.diagnl>b.diagnl)
		return false;
	else
		return a.h<b.h;
}

vector <Node> container;

int main(void)
{
	int a,b;
	for (int i=1;i<=150;i++)
		for (int j=i+1;j<=150;j++)
			container.push_back(Node(j,i,i*i+j*j));

	sort(container.begin(),container.end(),my_compare);
	int sz=container.size();
	while (true)
	{
		scanf("%d%d",&a,&b);
		if (a==0 && b==0)
			break;
		
		for (int i=0;i<sz;i++)
		{
			if (b==container[i].w && a==container[i].h)
			{
				printf("%d %d\n",container[i+1].h,container[i+1].w);
				break;
			}
		}
	}
	return 0;
}

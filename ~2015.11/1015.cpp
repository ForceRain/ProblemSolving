#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct _node
{
	int input_seq;
	int value;
	int sorted_grade;
	_node(int is,int v,int sg) : input_seq(is), value(v), sorted_grade(sg){}
}Node;

vector <Node> container;

int main(void)
{
	int N;
	cin>>N;
	int value;
	for (int i=0;i<N;i++)
	{
		cin>>value;
		container.push_back(Node(i+1,value,0));
	}
	return 0;
}
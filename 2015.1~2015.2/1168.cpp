#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct _node
{
	int number;
	struct _node *next;
}Node;

class Chain
{
private :
	Node *head;
	Node *last;
	int level;

public :
	Chain(int Number,int lv);
	void remove_node(int location);
	void remove_node();
	bool isNull();
};

Chain::Chain(int number,int lv) : level(lv)
{
	head=NULL;
	Node *tmp,*bef=NULL;
	for (int i=0;i<number;i++)
	{
		tmp=new Node();
		tmp->number=i+1;
		if (head==NULL)
			head=tmp;
		else
			bef->next=tmp;

		bef=tmp;
	}
	bef->next=head;
	last=bef;
}

void Chain::remove_node(int location)
{
	Node *tmp=head;
	Node *bef=last;
	Node *del;
	for (int i=1;i<location;i++)
	{
		bef=tmp;
		tmp=tmp->next;
	}

	del=tmp;
	cout<<tmp->number<<", ";
	bef->next=tmp->next;
	delete del;
	tmp=bef->next;

	while (tmp!=tmp->next)
	{
		for (int i=1;i<level;i++)
		{
			bef=tmp;
			tmp=tmp->next;
		}

		del=tmp;
		cout<<tmp->number<<", ";
		bef->next=tmp->next;
		delete del;
		tmp=bef->next;
	}

	cout<<tmp->number<<">"<<endl;
}

int main(void)
{
	int N,M;
	cin>>N>>M;

	Chain obj(N,M);
	cout<<"<";
	obj.remove_node(M);
	
	return 0;
}
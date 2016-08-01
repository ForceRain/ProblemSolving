#include <iostream>
#include <stack>
#include <vector>

using namespace std;

stack <int> max_stack;
stack <int> min_stack;
vector <int> max_vec;
vector <int> min_vec;

int main(void)
{
	int len;
	char c;
	cin>>len;

	int max_ptr=9,min_ptr=0;
	max_stack.push(max_ptr--);
	min_stack.push(min_ptr++);
	for (int i=0;i<len;i++)
	{
		cin>>c;
		if (c=='<')
		{
			while (!min_stack.empty())
			{
				min_vec.push_back(min_stack.top());
				min_stack.pop();
			}
		}
		if (c=='>')
		{
			while (!max_stack.empty())
			{
				max_vec.push_back(max_stack.top());
				max_stack.pop();
			}
		}
		max_stack.push(max_ptr--);
		min_stack.push(min_ptr++);
	}
	while (!min_stack.empty())
	{
		min_vec.push_back(min_stack.top());
		min_stack.pop();
	}
	while (!max_stack.empty())
	{
		max_vec.push_back(max_stack.top());
		max_stack.pop();
	}

	for (int i=0;i<max_vec.size();i++)
		cout<<max_vec[i];
	cout<<endl;
	for (int i=0;i<min_vec.size();i++)
		cout<<min_vec[i];
	cout<<endl;

	return 0;
}
#include <iostream>

using namespace std;

int my_stack[16];

int main(void)
{
	int P,num;
	int bracket_num=0,stack_top_ptr=-1;
	cin>>P;

	for (int i=0;i<P;i++)
	{
		stack_top_ptr=-1;
		bracket_num=0;
		cin>>num;
		for (int j=0;j<12;j++)
		{
			cin>>num;

			if (stack_top_ptr==-1)
				my_stack[++stack_top_ptr]=num;
			else
			{
				if (num>my_stack[stack_top_ptr-1])		// 넣으려는게 크면 넣어주고, 작으면 pop진행.
					my_stack[stack_top_ptr++]=num;
				else if (num==my_stack[stack_top_ptr-1])
				{}
				else
				{
					int value=my_stack[stack_top_ptr-1];
					stack_top_ptr--;
					bracket_num+=(value-my_stack[stack_top_ptr-1]);
				}
			}
		}
		cout<<i+1<<" "<<bracket_num+stack_top_ptr<<endl;
	}


	return 0;
}
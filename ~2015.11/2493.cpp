#include <iostream>

using namespace std;

int tower[500001];
int stack[500001];
int output[500001];
int stack_ptr=-1;

int main(void)
{
	int tmp,N;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>tmp;
		tower[i]=tmp;
	}

	stack[0]=tower[N-1];
	stack_ptr++;

	for (int j=N-2;j>=0;j--)
	{
		if (tower[j]<=stack[stack_ptr])
		{
			stack[++stack_ptr]=tower[j];
		}
		else
		{
			int output_ptr=j+1;
			while (stack_ptr>=0 && tower[j]>stack[stack_ptr])
			{
				output[output_ptr]=j+1;
				output_ptr++;
				stack_ptr--;
			}
			stack[++stack_ptr]=tower[j];
		}
	}

	for (int i=0;i<N;i++)
		cout<<output[i]<<" ";
	cout<<endl;

	return 0;
}
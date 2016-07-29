#include <iostream>

using namespace std;

int count_ans=0;
int values[100];
int object;

void findout(int remain)
{
	if (remain>=0)
	{
		if (remain==0)
			count_ans++;
		else
		{
			for (int i=0;i<object;i++)
				findout(remain-values[i]);
		}
	}
}

int main(void)
{
	int weight;
	cin>>object>>weight;

	for (int i=0;i<object;i++)
		cin>>values[i];

	findout(weight);
	cout<<count_ans<<endl;

	return 0;
}
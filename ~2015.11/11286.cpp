#include <iostream>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

class my_compare
{
public :
	bool operator() (int a,int b)
	{
		if ( abs(a) > abs(b) )
			return true;
		else if ( abs(a) < abs(b) )
			return false;
		else
			return a>b;
	}
};
priority_queue<int, vector<int>, my_compare > container;

int main(void)
{
	int N;
	int val;
	scanf("%d",&N);
	for (int i=0;i<N;i++)
	{
		scanf("%d",&val);
		if ( val == 0 )
		{
			if (container.empty())
				printf("0\n");
			else
			{
				printf("%d\n",container.top());
				container.pop();
			}
		}
		else
			container.push(val);
	}
	return 0;
}
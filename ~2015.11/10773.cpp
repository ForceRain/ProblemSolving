#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

stack<int> container;

int main(void)
{
	int K,num;
	scanf("%d",&K);
	for (int i=0;i<K;i++)
	{
		scanf("%d",&num);
		if (num==0)
			container.pop();
		else
			container.push(num);
	}
	int summation=0;
	while (!container.empty())
	{
		summation+=container.top();
		container.pop();
	}
	cout<<summation<<endl;
		
	return 0;
}

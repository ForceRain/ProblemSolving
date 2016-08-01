#include <iostream>
#include <algorithm>

using namespace std;

int space[10001];

int main(void)
{
	int testcase;
	cin>>testcase;
	int N,tmp;
	int counter=0;
	for (int i=0;i<testcase;i++)
	{
        counter=0;
		cin>>N;
		cout<<(N+1)/2<<endl;
		for (int j=1;j<=N;j++)
		{
			cin>>tmp;
			space[j-1]=tmp;
			if ((j%2)==1)
			{
				sort(space,space+j);
				cout<<space[(j-1)/2]<<" ";
				counter++;
				if (counter==10)
				{
					cout<<endl;
					counter=0;
				}
			}
		}
        if (counter!=0)
		    cout<<endl;
	}

	return 0;
}
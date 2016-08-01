#include <iostream>

using namespace std;

int space[1001];

int main(void)
{
	int test_case, N;
	cin>>test_case;

	for(int i=0;i<test_case;i++)
	{
		cin>>N;

		space[0]=0;
		cin>>space[1];
		for (int j=2;j<=N;j++)
		{
			int tmp;
			cin>>tmp;
			space[j]=space[j-1]+tmp;
		}

		int maximum=space[1]-space[0];
		for (int l=1;l<=N;l++)
		{
			for (int k=l;k<=N;k++)
				if ((space[k]-space[l-1])>maximum)
					maximum=space[k]-space[l-1];
		}
		cout<<maximum<<endl;
	}
	return 0;
}
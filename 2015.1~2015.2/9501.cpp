#include <iostream>

using namespace std;

int main(void)
{
	int test;
	cin>>test;

	int ship,dis;
	for (int i=0;i<test;i++)
	{
		cin>>ship>>dis;
		int A,B,C;
		int cnt=0;
		for (int j=0;j<ship;j++)
		{
			cin>>A>>B>>C;
			
			long long result=A*B;

			if (result>=(C*dis))
				cnt++;
		}
		cout<<cnt<<endl;
	}

	return 0;
}
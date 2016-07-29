#include <iostream>

using namespace std;

int up(int n)
{
	int limit=3;
	int output=1;
	bool out=false;

	if (n==1)
		return 1;
	else
	{
		n--;
		while (!out)
		{		
			for (int i=1;i<=limit;i++,n--)
			{
				//cout<<i;
				if (n==1)
				{
					output=i;
					out=true;
					break;
				}
			}

			if (out)
				break;

			for (int i=limit-1;i>=1;i--,n--)
			{
				//cout<<i;
				if (n==1)
				{
					output=i;
					out=true;
					break;
				}
			}
			limit+=2;
		}
	}

	return output;
}

int down(int n)
{
	int limit=2;
	int output=1;
	bool out=false;

	while (!out)
	{		
		for (int i=1;i<=limit;i++,n--)
		{
			//cout<<i;
			if (n==1)
			{
				output=i;
				out=true;
				break;
			}
		}

		if (out)
			break;

		for (int i=limit-1;i>=1;i--,n--)
		{
			//cout<<i;
			if (n==1)
			{
				output=i;
				out=true;
				break;
			}
		}
		limit+=2;
	}
	return output;
}

int main(void)
{
	int N;
	cin>>N;

	cout<<up(N)<<"/"<<down(N)<<endl;
	return 0;
}
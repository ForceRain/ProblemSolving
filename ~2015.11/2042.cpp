#include <iostream>

using namespace std;

int space[1000001];

int main(void)
{
	int N,M,K,tmp,total,dum=0;
	cin>>N>>M>>K;
	total=M+K;
	
	for (int i=1;i<=N;i++)
	{
		cin>>tmp;
		space[i]=tmp+dum;
		dum+=tmp;
	}

	int start=0,end=0;
	int diff=0;
	int a,b,c;
	for (int i=0;i<total;i++)
	{
		cin>>a>>b>>c;
		if (a==1)
		{
			diff=c-(space[b]-space[b-1]);
			for (int j=b;j<=N;j++)
				space[j]+=diff;
		}
		else
			cout<<space[c]-space[b-1]<<endl;
	}

	return 0;
}
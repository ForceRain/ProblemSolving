#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> pc;
vector <int> qc;

int main(void)
{
	int P,Q;
	freopen("test.txt","r",stdin);
	scanf("%d%d",&P,&Q);

	int limP = sqrt(P);
	for ( int i=1;i<=limP;i++ )
	{
		if ( (P%i) == 0 )
		{
			pc.push_back(i);
			if ( (P/i) != i )
				pc.push_back(P/i);
		}
	}
	int limQ = sqrt(Q);
	for ( int i=1;i<=limQ;i++ )
	{
		if ( (Q%i) == 0 )
		{
			qc.push_back(i);
			if ( (Q/i) != i )
				qc.push_back(Q/i);
		}
	}

	sort(pc.begin(),pc.end());
	sort(qc.begin(),qc.end());
	int sz1 = pc.size();
	int sz2 = qc.size();

	for ( int i=0;i<sz1;i++ )
	{
		for ( int j=0;j<sz2;j++ )
			printf("%d %d\n",pc[i],qc[j]);
	}

	return 0;
}
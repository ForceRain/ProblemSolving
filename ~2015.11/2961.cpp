#include <iostream>
#include <vector>

using namespace std;

pair <int,int> ingredi[11];
int min_diff=0x7FFFFFFF;
int N;

void backtracking(int level,vector<pair<int,int> > cont)
{
	if (level==N)
	{
		if (cont.size()!=0)
		{
			int siz=cont.size();
			int mul=1,sum=0;
			for (int i=0;i<siz;i++)
			{
				mul*=cont[i].first;
				sum+=cont[i].second;
			}
			int val=((mul>sum)?(mul-sum):(sum-mul));
			if (val<min_diff)
				min_diff=val;
		}
	}
	else
	{
		backtracking(level+1,cont);
		cont.push_back(ingredi[level+1]);
		backtracking(level+1,cont);
	}
}

int main(void)
{
	cin>>N;
	for (int i=1;i<=N;i++)
		cin>>ingredi[i].first>>ingredi[i].second;
	
	backtracking(0,vector<pair<int,int> >());
	cout<<min_diff<<endl;

	return 0;
}
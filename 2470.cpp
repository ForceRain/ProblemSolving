#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <functional>
#include <cmath>

using namespace std;

vector <int> al;
vector <int> acid;

int main(void)
{
	int N;
	freopen("test.txt","r",stdin);
	scanf("%d",&N);

	for ( int i=0;i<N;i++ )
	{
		int val;
		scanf("%d",&val);
		if ( val > 0 )	acid.push_back(val);
		if ( val < 0 )	al.push_back(val);
	}

	sort( al.begin(),al.end(),greater<int>() );
	sort( acid.begin(),acid.end() );

	int mini = 0x7FFFFFFF;
	int min_1;
	int min_2;
	int al_sz = al.size();
	for ( int j=1;j<al_sz;j++ )	
		if ( abs ( al[j-1]+al[j] ) < mini )	
		{
			min_1 = al[j-1];
			min_2 = al[j];
			mini = abs ( al[j-1]+al[j] );
		}
	int ac_sz = acid.size();
	for ( int j=1;j<ac_sz;j++ )	
		if ( abs ( acid[j-1]+acid[j] ) < mini )	
		{
			min_1 = acid[j-1];
			min_2 = acid[j];
			mini = abs( acid[j-1]+acid[j] );
		}

	int al_ptr = 0;
	int ac_ptr = 0;

	while ( al_ptr < al_sz && ac_ptr < ac_sz )
	{
		int t_val = al[ al_ptr ] + acid[ ac_ptr ];

		if ( t_val < 0 )
		{
			if ( abs(t_val) < mini )
			{
				min_1 = al[al_ptr];
				min_2 = acid[ac_ptr];
				mini = abs(t_val);
			}
			ac_ptr++;
		}
		else if ( t_val > 0 )
		{
			if ( abs(t_val) < mini )
			{
				min_1 = al[al_ptr];
				min_2 = acid[ac_ptr];
				mini = abs(t_val);
			}
			al_ptr++;
		}
		else
		{
			min_1 = al[al_ptr];
			min_2 = acid[ac_ptr];
			break;
		}
	}

	if ( min_1 > min_2 )
		printf("%d %d\n",min_2,min_1);
	else
		printf("%d %d\n",min_1,min_2);

	return 0;
}
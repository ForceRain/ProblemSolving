#include <iostream>
#include <algorithm>

using namespace std;

int space_x[21];
int space_y[21];

int main(void)
{
	int N;
	cin>>N;

	for (int i=0;i<N;i++)
		cin>>space_x[i]>>space_y[i];
	sort(space_x,space_x+N);
	sort(space_y,space_y+N);

	int out_len=((space_x[N-1]-space_x[0])>(space_y[N-1]-space_y[0])? (space_x[N-1]-space_x[0]) :(space_y[N-1]-space_y[0]));
	cout<<out_len*out_len<<endl;

	return 0;
}
#include <iostream>

using namespace std;

int cur_ptr=0;
int space[1001];

int main(void)
{
	int N,M,dice,roll_dice=0;
	cin>>N>>M;
	for (int i=0;i<N;i++)
		cin>>space[i];
	for (int i=0;i<M;i++)
	{
		cin>>dice;
		cur_ptr+=dice;
		if (cur_ptr>=N)
			break;
		if (space[cur_ptr]!=0)
			cur_ptr+=space[cur_ptr];
		if (cur_ptr<0)
			cur_ptr=0;
		if (cur_ptr>=N)
			break;
		roll_dice++;
	}
	cout<<roll_dice<<endl;

	return 0;
}
#include <iostream>

using namespace std;

int main(void)
{
	int N;
	cin>>N;
	int sec=0;
	int fly=1;

	while (N>0)
	{
		if (N<fly)
			fly=1;
		N-=fly;
		sec++;
		fly++;
	}
	cout<<sec<<endl;

	return 0;
}
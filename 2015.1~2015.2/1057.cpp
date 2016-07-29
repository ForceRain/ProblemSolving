#include <iostream>

using namespace std;

int main(void)
{
	int N;
	int kim,im;
	cin>>N>>kim>>im;

	int level=1;
	while (kim!=im)
	{
		if (kim%2==1)
			kim=(kim+1)/2;
		else
			kim/=2;

		if (im%2==1)
			im=(im+1)/2;
		else
			im/=2;

		level++;
	}
	cout<<level-1<<endl;

	return 0;
}
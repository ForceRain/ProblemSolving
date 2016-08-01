#include <iostream>

using namespace std;

int space[1001];

int main(void)
{
	int A,B,C,D,P,M,N;
	cin>>A>>B>>C>>D;
	cin>>P>>M>>N;

	int ptr=1;
	while (ptr<1001)
	{
		for (int i=0;i<A;i++)
			space[ptr++]++;
		for (int i=0;i<B;i++)
			ptr++;
	}
	ptr=1;
	while (ptr<1001)
	{
		for (int i=0;i<C;i++)
			space[ptr++]++;
		for (int i=0;i<D;i++)
			ptr++;
	}
	cout<<space[P]<<endl;
	cout<<space[M]<<endl;
	cout<<space[N]<<endl;
	return 0;
}
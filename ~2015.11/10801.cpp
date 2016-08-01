#include <iostream>

using namespace std;

int A[11];
int B[11];

int main(void)
{
	for (int i=0;i<10;i++)
		cin>>A[i];
	for (int i=0;i<10;i++)
		cin>>B[i];

	int a=0,b=0;
	for (int i=0;i<10;i++)
	{
		if (A[i]<B[i])
			b++;
		else if (A[i]>B[i])
			a++;
	}

	if (a>b)
		cout<<"A"<<endl;
	else if (a<b)
		cout<<"B"<<endl;
	else 
		cout<<"D"<<endl;

	return 0;
}
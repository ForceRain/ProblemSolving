#include <iostream>

using namespace std;

int main(void)
{
	int A,B,C,D,P;
	cin>>A>>B>>C>>D>>P;

	int X_com=A*P;
	int Y_com;

	if (C>=P)
		Y_com=B;
	else
		Y_com=B+(P-C)*D;

	if (X_com>Y_com)
		cout<<Y_com<<endl;
	else
		cout<<X_com<<endl;

	return 0;
}
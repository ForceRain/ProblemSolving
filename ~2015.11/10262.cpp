#include <iostream>

using namespace std;

int main(void)
{
	int A,B,C,D;
	cin>>A>>B>>C>>D;
	int max_em=B+D,min_em=A+C;
	cin>>A>>B>>C>>D;
	int max_gun=B+D,min_gun=A+C;
	int sum=0;
	sum=(max_em-max_gun)+(min_em-min_gun);
	if (sum<0)
		cout<<"Emma"<<endl;
	else if (sum>0)
		cout<<"Gunnar"<<endl;
	else
		cout<<"Tie"<<endl;

	return 0;
}
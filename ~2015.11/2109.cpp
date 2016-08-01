#include <iostream>

using namespace std;

int schedule[10001];

int main(void)
{
	int N;
	cin>>N;

	int pay,day;
	for (int i=0;i<N;i++)
	{
		cin>>pay>>day;
		if (schedule[day]<pay)
			schedule[day]=pay;
	}

	unsigned long long total=0;
	for (int i=0;i<10001;i++)
	{
		if (schedule[i]!=0)
			total+=schedule[i];
	}

	cout<<total<<endl;

	return 0;
}
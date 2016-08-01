#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char key[27];
int real_key[27];
string space[21];
char buf[100];

bool my_func(string a, string b)
{
	int l1=a.length();
	int l2=b.length();
	int i=0;
		
	while (i<l1 && i<l2)
	{
		if (real_key[a[i]-'A']<real_key[b[i]-'A'])
			return true;
		else if (real_key[a[i]-'A']>real_key[b[i]-'A'])
			return false;
		i++;
	}
	if (l1>l2)
		return false;
	else if (l1<l2)
		return true;
	else 
		return false;
}

int main(void)
{
	int N;
	int counter=1;
	while (true)
	{
		cin>>N;

		if (N==0)
			break;

		cin>>key;
		for (int i=0;i<26;i++)
			real_key[key[i]-'A']=i;

		for (int j=0;j<N;j++)
		{
			cin>>buf;
			space[j]=buf;
		}

		sort(space,space+N,my_func);

		cout<<"year "<<counter++<<endl;
		for (int i=0;i<N;i++)
			cout<<space[i]<<endl;
	}

	return 0;
}
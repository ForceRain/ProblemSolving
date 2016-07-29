#include <iostream>
#include <cstring>

using namespace std;

char lett_line[100004];
int alarr[26];

bool check_lett()
{
	int str_len=strlen(lett_line);
	for (int i=0;i<26;i++)
		alarr[i]=0;

	for (int i=0;i<str_len;i++)
	{
		alarr[lett_line[i]-'A']++;

		if (alarr[lett_line[i]-'A']==3)
		{
			if ((str_len<=(i+1))||(lett_line[i]!=lett_line[i+1]))
				return false;

			i++;
			alarr[lett_line[i]-'A']=0;
		}
	}
	return true;
}

int main(void)
{
	int N;
	cin>>N;

	for (int i=0;i<N;i++)
	{
		cin>>lett_line;

		if (check_lett())
			cout<<"OK"<<endl;
		else
			cout<<"FAKE"<<endl;
	}

	return 0;
}
#include <iostream>

using namespace std;

int question_host[101];
int person_point[101];

int main(void)
{
	int N,question,tmp,w_cnt=0;
	cin>>N;
	cin>>question;
	for (int i=1;i<=question;i++)
		cin>>question_host[i];

	for (int i=1;i<=question;i++)
	{
		w_cnt=0;
		int host=question_host[i];
		for (int j=1;j<=N;j++)
		{
			cin>>tmp;
			if (host!=tmp)
				w_cnt++;
			else
				person_point[j]++;
		}
		person_point[host]+=w_cnt;
	}

	for (int i=1;i<=N;i++)
	{
		cout<<person_point[i]<<endl;
	}

	return 0;
}
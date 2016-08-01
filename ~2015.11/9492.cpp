#include <iostream>
#include <queue>
#include <string>

using namespace std;

char input_stream[100];

int main(void)
{
	int N;
	while (true)
	{
		cin>>N;
		queue<string> first_q;
		queue<string> second_q;

		if (N==0)
			break;

		int f_q,s_q;
		if (N%2!=0)
		{
			f_q=N/2+1;
			s_q=N/2;
		}
		else
		{
			f_q=N/2;
			s_q=N/2;
		}

		for (int i=0;i<f_q;i++)
		{
			cin>>input_stream;
			string obj(input_stream);
			first_q.push(obj);
		}
		for (int i=0;i<s_q;i++)
		{
			cin>>input_stream;
			string obj(input_stream);
			second_q.push(obj);
		}

		while (!first_q.empty() && !second_q.empty())
		{
			cout<<first_q.front()<<endl;
			first_q.pop();
			cout<<second_q.front()<<endl;
			second_q.pop();
		}

		if (!first_q.empty())
		{
			cout<<first_q.front()<<endl;
			first_q.pop();
		}

	}
	return 0;
}
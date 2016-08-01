#include <iostream>
#include <cstring>
#include <cstdio>
#include <stack>

using namespace std;

char input_stream[100001];

int main(void)
{
	int N;
	int str_len;
	bool okay=true;
	int counter=0;
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		okay=true;
		stack < char > container;
		scanf("%s",input_stream);
		str_len=strlen(input_stream);
		for (int j=0;j<str_len;j++)
		{
			if (container.empty())
				container.push(input_stream[j]);
			else
			{
				if (container.top()!=input_stream[j])
					container.push(input_stream[j]);
				else
					container.pop();
			}
		}

		if (container.empty())
		{
	//		cout<<"a::"<<input_stream<<endl;
			counter++;
		}
	}

	printf("%d\n",counter);

	return 0;
}
#include <iostream>
#include <map>
#include <cstdio>
#include <string>

using namespace std;

char input_buffer[100];
map < string,int > container;

int main(void)
{
	int N,angry=0;
	int cookie_get=0;
	scanf("%d",&N);

	for (int i=0;i<N;i++)
	{
		scanf("%s",input_buffer);
		map<string,int>::iterator it;
		if ( (it = container.find(input_buffer)) == container.end())
		{
			container.insert(pair<string,int>(input_buffer,1));
			cookie_get++;
		}
		else
		{
		//	cout<<"i : "<<i<<" : "<<it->second<<endl;
			if ( it->second > ( cookie_get - it->second ) )
				angry++;
			else
			{
				(it->second)++;
				cookie_get++;
			}
		}
	}
	printf("%d\n",angry);

	return 0;
}
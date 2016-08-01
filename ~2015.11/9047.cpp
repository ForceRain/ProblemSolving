#include <iostream>
#include <cstring>
#include <cstdlib>
#include <functional>
#include <algorithm>
#include <cstdio>

using namespace std;

char input_stream[6];

int main(void)
{
	int testcase;
	int big,small;
	bool found=false;
	cin>>testcase;

	for (int i=0;i<testcase;i++)
	{
		found=false;
		int counter=0;
		memset(input_stream,0,sizeof(input_stream));
		cin>>input_stream;
		if (strcmp(input_stream,"6174")==0)
			found=true;
		while(!found)
		{
			sort(input_stream,input_stream+4);
			small=atoi(input_stream);
			sort(input_stream,input_stream+4,greater<char>());
			big=atoi(input_stream);
			int result=big-small;
			sprintf(input_stream,"%d",result);
			if (strcmp(input_stream,"6174")==0)
				found=true;
			counter++;
		}
		cout<<counter<<endl;
	}

	return 0;
}
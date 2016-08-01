#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

char input_buffer[1000];
int datas[513];

int main(void)
{
	int tst;
	scanf("%d",&tst);
	getchar();
	for (int i=0;i<tst;i++)
	{
		gets(input_buffer);
		int ln=strlen(input_buffer);
		int d,num,cur_ptr=0;
		cin>>d;
		for (int j=0;j<d;j++)
		{
			cin>>num;
			cur_ptr+=num;
			if (cur_ptr>=ln)
				cur_ptr=cur_ptr%ln;
			if (cur_ptr<0)
				cur_ptr=cur_ptr+ln;
			datas[j]=cur_ptr;
		}

		for (int j=0;j<d;j++)
			cout<<input_buffer[datas[j]];
		cout<<endl;
		getchar();
	}

	return 0;
}